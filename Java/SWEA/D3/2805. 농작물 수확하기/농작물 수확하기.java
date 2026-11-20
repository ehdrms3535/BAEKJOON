import java.util.Scanner;

class Solution {

   public static void vis(int[][] remain, int max, int x, int y) {

    if (x < 0 || y < 0 ||
        x >= remain.length || y >= remain.length ||
        max < 0 || remain[x][y] >= max) {
        return;
    }

    remain[x][y] = max;

    vis(remain, max - 1, x - 1, y);
    vis(remain, max - 1, x + 1, y);
    vis(remain, max - 1, x, y + 1);
    vis(remain, max - 1, x, y - 1);
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int tc = 1; tc <= T; tc++) {

            int N = sc.nextInt();
            int[][] arr = new int[N][N];
            int[][] visit = new int[N][N];

            for (int i = 0; i < N; i++) {
                String str = sc.next();

                for (int j = 0; j < N; j++) {
                    arr[i][j] = str.charAt(j) - '0';
                    visit[i][j] = -1;
                }
            }

            int sum = 0;

            vis(visit, N / 2, N / 2, N / 2);

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (visit[i][j]>=0) {
                        sum += arr[i][j];
                    }
                }
            }

            System.out.println("#" + tc + " " + sum);
        }
    }
}