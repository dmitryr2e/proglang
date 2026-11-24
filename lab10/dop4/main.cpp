#include <iostream>
#include <vector>
#include <cstdlib>

void demo_reallocation() {
    std::cout << "=== 1. Особенность: перемещение памяти при расширении (инвалидация указателей) ===\n";

    // Выделяем начальный динамический массив через malloc/realloc
    int capacity = 2;
    int *arr = (int*)malloc(capacity * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;

    int *dangling_ptr = &arr[0];
    std::cout << "Исходный адрес буфера в куче: " << arr << "\n";
    std::cout << "Указатель на arr[0]:            " << dangling_ptr << " (значение: " << *dangling_ptr << ")\n\n";

    std::cout << "Расширяем массив с 2 до 100000 элементов через realloc...\n";
    // При сильном расширении менеджер памяти гарантированно перенесет буфер на новый адрес:
    int *new_arr = (int*)realloc(arr, 100000 * sizeof(int));
    if (new_arr) {
        arr = new_arr;
    }

    std::cout << "Новый адрес буфера в куче:    " << arr << "\n";
    if (arr != dangling_ptr) {
        std::cout << "[!] Адрес буфера изменился! Произошло перемещение данных в новую область кучи.\n";
        std::cout << "[!] Старый указатель dangling_ptr (" << dangling_ptr << ") стал ВИСЯЧИМ (инвалидирован)!\n";
        std::cout << "    Обращение по нему приведет к неопределенному поведению (Use-After-Free).\n";
    }

    free(arr);
    std::cout << "\n";
}

void demo_vector_reallocation() {
    std::cout << "=== 2. Перемещение памяти при росте std::vector (push_back) ===\n";
    std::vector<int> vec;
    std::cout << "Начальный capacity: " << vec.capacity() << "\n";

    const int *prev_data = nullptr;
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
        const int *curr_data = vec.data();
        if (curr_data != prev_data) {
            std::cout << "Размер: " << vec.size() << " | Capacity: " << vec.capacity()
                      << " | Буфер перемещен по новому адресу: " << curr_data << "\n";
            prev_data = curr_data;
        }
    }
    std::cout << "\n";
}

void demo_memory_errors_overview() {
    std::cout << "=== 3. Основные ошибки при работе с динамической памятью ===\n";
    std::cout << "1. Утечка памяти (Memory Leak):\n"
              << "   Выделение памяти через new/malloc без последующего вызова delete/free.\n"
              << "   Потеря указателя приводит к тому, что занятая память не может быть освобождена до завершения процесса.\n\n";

    std::cout << "2. Использование после освобождения (Use-After-Free):\n"
              << "   int *p = new int(42);\n"
              << "   delete p;\n"
              << "   *p = 100; // ОШИБКА: память уже возвращена менеджеру кучи!\n\n";

    std::cout << "3. Двойное освобождение (Double Free):\n"
              << "   int *p = new int(42);\n"
              << "   delete p;\n"
              << "   delete p; // ОШИБКА: аварийное завершение (SIGABRT / heap corruption)!\n\n";

    std::cout << "4. Несоответствие операторов выделения и освобождения:\n"
              << "   int *arr = new int[100];\n"
              << "   delete arr; // ОШИБКА: требуется delete[] arr, иначе деструкторы/заголовки кучи ломаются.\n";
}

int main() {
    demo_reallocation();
    demo_vector_reallocation();
    demo_memory_errors_overview();
    return 0;
}
