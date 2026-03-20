class Solution {
    public int solution(String s) {
        int max = 1;
        char[] arr = s.toCharArray();
        int n = s.length();
        if (n == 0) return 0;

        int tmp = 0;
        while (tmp < n) {
            int left = tmp;
            int right = n - 1; 

            while (left < right) {
                int l = left, r = right;
                while (l < r && arr[l] == arr[r]) {
                    l++;
                    r--;
                }

                if (l >= r) {
                    max = Math.max(max, right - left + 1);
                    break;
                }
                
                right--;
                if (right - left + 1 <= max) break; 
            }
            tmp++;
        }
        return max;
    }
}
