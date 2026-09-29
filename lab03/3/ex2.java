public class ex2 {
    public static void main(String[] args) {
        int n = 3;
        while (n) {            // ошибка: int cannot be converted to boolean
            System.out.print(n + " ");
            n--;
        }
        System.out.println();
    }
}
