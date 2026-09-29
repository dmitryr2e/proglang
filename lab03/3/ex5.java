public class ex5 {
    static void f(int a) { System.out.println(a); }
    public static void main(String[] args) {
        f(2.9);                // ошибка: incompatible types: possible lossy conversion from double to int
    }
}
