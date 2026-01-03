class Solution {
     public long solution(int[] sequence) {
        long maxCase1 = 0;
        long maxCase2 = 0;
        
        long currentSum1 = 0;
        long currentSum2 = 0;
        
        for (int i = 0; i < sequence.length; i++) {
            int mask = (i % 2 == 0) ? 1 : -1;
            
            long val1 = (long) sequence[i] * mask;
            long val2 = (long) sequence[i] * (-mask);
            
            currentSum1 = Math.max(val1, currentSum1 + val1);
            currentSum2 = Math.max(val2, currentSum2 + val2);
            
            maxCase1 = Math.max(maxCase1, currentSum1);
            maxCase2 = Math.max(maxCase2, currentSum2);
        }
        
        return Math.max(maxCase1, maxCase2);
    }
}