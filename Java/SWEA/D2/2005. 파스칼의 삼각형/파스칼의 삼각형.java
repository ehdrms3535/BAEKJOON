
import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int test_case = 1; test_case <= T; test_case++) {
            int N = sc.nextInt();
            int[] arr = new int[N];
            arr[0] = 1;

            System.out.println("#" + test_case);

            for (int i = 0; i < N; i++) {

                // 오른쪽부터 이전 행의 값 더하기
                for (int j = i; j > 0; j--) {
                    arr[j] += arr[j - 1];
                }

                // 현재 행 출력
                for (int j = 0; j <= i; j++) {
                    System.out.print(arr[j] + " ");
                }
                System.out.println();
            }
        }
    }
}
