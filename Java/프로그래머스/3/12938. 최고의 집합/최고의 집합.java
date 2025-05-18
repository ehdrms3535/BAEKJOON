class Solution {
    public int[] solution(int n, int s) {
        int[] answer = new int[n];
        if(n>s) {
            answer = new int[1];
            answer[0]=-1;
            return answer;
        }
        
        int base = s / n;
        int extra = s % n;
        
        for(int i=0; i<n;i++) answer[i] = base;
                
        for(int i = n - 1; i >= n - extra; i--) answer[i]++;
        
        
        return answer;
    }
}



    