#include <iostream>

// Структура гарантирует строгое последовательное расположение массива a и переменной counter в памяти
struct MemoryFrame {
    int a[4];             // Элементы a[0], a[1], a[2], a[3] (размер 16 байт)
    volatile int counter; // Расположен непосредственно следом за a[3] (по смещению a[4])
};

int main() {
    MemoryFrame frame;

    std::cout << "=== Демонстрация неопределенного поведения: зависание программы (бесконечный цикл) ===\n\n";
    std::cout << "Адрес a[0]:     " << &frame.a[0] << "\n";
    std::cout << "Адрес a[3]:     " << &frame.a[3] << "\n";
    std::cout << "Адрес a[4]:     " << &frame.a[4] << " (выход за границу массива!)\n";
    std::cout << "Адрес counter:  " << (void*)&frame.counter << " (полностью совпадает с &a[4]!)\n\n";

    std::cout << "Запускаем цикл for (counter = 0; counter <= 4; counter++), где внутри a[counter] = 0:\n\n";

    int guard_iterations = 0; // Предохранитель, чтобы процесс не висел бесконечно при тестировании

    for (frame.counter = 0; frame.counter <= 4; frame.counter++) {
        std::cout << "  Итерация цикла: counter = " << frame.counter << "\n";

        if (frame.counter == 4) {
            std::cout << "  -> ОШИБКА: обращение к a[4] = 0 затирает переменную counter нулем!\n";
        }

        // Запись в элемент массива:
        // При counter == 4 это физически записывает 0 в frame.counter!
        frame.a[frame.counter] = 0;

        guard_iterations++;
        if (guard_iterations > 12) {
            std::cout << "\n[!] Предохранитель сработал: обнаружено бесконечное зацикливание!\n"
                      << "    Цикл выполнился уже " << guard_iterations << " раз и никогда бы не завершился сам,\n"
                      << "    поскольку условие выхода counter <= 4 никогда не может быть нарушено.\n"
                      << "    Программа зависает из-за непреднамеренной порчи счетчика цикла.\n";
            break;
        }
    }

    return 0;
}
