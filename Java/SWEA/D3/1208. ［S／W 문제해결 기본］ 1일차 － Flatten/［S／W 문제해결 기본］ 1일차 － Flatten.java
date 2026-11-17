import java.util.*;

class Solution {
    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);

        for (int test_case = 1; test_case <= 10; test_case++) {

            int N = sc.nextInt();
            int[] arr = new int[100];
            int sum = 0;

            for (int i = 0; i < 100; i++) {
                arr[i] = sc.nextInt();
                sum += arr[i];
            }

            Arrays.sort(arr);

            // 낮은 쪽 채우기
            int remain = N;
            int min = arr[0];

            for (int i = 1; i < 100; i++) {
                int cost = (arr[i] - min) * i;

                if (remain < cost) {
                    min += remain / i;
                    break;
                }

                remain -= cost;
                min = arr[i];
            }

            // 높은 쪽 빼기
            int tmp = N;
            int max = arr[99];

            for (int i = 98; i >= 0; i--) {
                int t = (max - arr[i]) * (99 - i);

                if (tmp < t) {
                    max -= tmp / (99 - i);
                    break;
                }

                tmp -= t;
                max = arr[i];
            }

            // 평균을 이용한 평탄화 한계 보정
            min = Math.min(min, sum / 100);
            max = Math.max(max, (sum + 99) / 100);

            System.out.println("#" + test_case + " " + (max - min));
        }
    }
}