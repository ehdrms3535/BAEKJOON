import java.util.*;

class Solution {
    
    public int linear_max(int[] arr,int l,int r){
        int prev2 = 0; //i-2
        int prev1 = 0; //i-1
        for (int i= l ; i< r + 1;i++){
            int cur = Math.max(prev1, prev2 + arr[i]); // (i-2 +i > i)? i-2 + i : i 
            prev2 = prev1; //i-2 -> i-1
            prev1 = cur; // i-1 -> i
            // 넣은게 더큰지 안넣은게 더큰지 판별
        }
        return prev1;
    }        
    public int solution(int sticker[]) {
        int n = sticker.length;
        if (n == 1) return sticker[0];
        if (n == 2) return Math.max(sticker[0], sticker[1]);

        int case1 = linear_max(sticker, 0, n - 2); 
        int case2 = linear_max(sticker, 1, n - 1);
        return Math.max(case1, case2);
    }
}