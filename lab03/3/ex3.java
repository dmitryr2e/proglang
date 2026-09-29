public class ex3 {
    public static void main(String[] args) {
        boolean b = 5;         // ошибка: int cannot be converted to boolean
        int i = true;          // ошибка: boolean cannot be converted to int
        System.out.println(b + " " + i);
    }
}
