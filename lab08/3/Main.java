public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {1, 2, 3},
            {4, 0, 5},
            {6, 7, 8}
        };
        int row = -1;
        int col = -1;
        search:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    row = i;
                    col = j;
                    break search;
                }
            }
        }
        System.out.println(row + " " + col);
    }
}
