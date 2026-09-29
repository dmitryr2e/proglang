public class ex4 {
    public static void main(String[] args) {
        long big = 5000000000L;
        int small = big;       // ошибка: possible lossy conversion from long to int
        System.out.println(small);
    }
}
