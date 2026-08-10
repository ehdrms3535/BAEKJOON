class Solution {
    public int solution(int[] money) {
        int answer = 0;
        int N = money.length;
        
        if(N==1) return money[0];
        if(N==2) return Math.max(money[0],money[1]);
        
        
        int[] dp = new int[N];
        dp[0] = money[0];
        dp[1] = money[0];
        
        for(int i=2;i<=N-2;i++){
            dp[i] = Math.max(dp[i-1],dp[i-2]+money[i]);            
        }
        
        int[] dp1 = new int[N];
        dp1[0] = 0; 
        dp1[1] = money[1];
        
        if (N > 2) {
            dp1[2] = Math.max(money[1], money[2]);
        }
        
        for (int i = 3; i <= N - 1; i++) {
            dp1[i] = Math.max(dp1[i - 1], dp1[i - 2] + money[i]);
        }
        
        return Math.max(dp[N-2],dp1[N-1]);
    }
}