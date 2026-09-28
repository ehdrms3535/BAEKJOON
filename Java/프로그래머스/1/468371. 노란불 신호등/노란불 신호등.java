class Solution {
    public int solution(int[][] signals) {
        int len = signals.length;
        int[] tmp = new int[len];
        int[] period = new int[len];
        int limit = 1;

        for (int i = 0; i < len; i++) {
            tmp[i] = signals[i][0] + 1;
            period[i] = signals[i][0] + signals[i][1] + signals[i][2];
            limit = limit / gcd(limit, period[i]) * period[i];
        }

        while (true) {
            int start = tmp[0];
            int end = tmp[0] + signals[0][1] - 1;
            int earliest = 0;

            for (int i = 1; i < len; i++) {
                start = Math.max(start, tmp[i]);
                end = Math.min(end, tmp[i] + signals[i][1] - 1);

                if (tmp[i] < tmp[earliest]) {
                    earliest = i;
                }
            }

            if (start <= end) {
                return start <= limit ? start : -1;
            }

            if (tmp[earliest] > limit) {
                return -1;
            }
            
            tmp[earliest] += period[earliest];
        }
    }

    private int gcd(int a, int b) {
        while (b != 0) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }
}