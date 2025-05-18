class Solution {
    int locate=0;
    public int[][] solution(int n) {
        int moves = (int) Math.pow(2, n) - 1; // 이동 횟수
        int[][] answer = new int[moves][2];
        hanoi(answer,n,1,3,2);
        return answer;
    }
    public void hanoi(int[][] answer,int n,int from,int to,int aux){
        if(n==1) {
            answer[locate][0]=from;
            answer[locate][1]=to;
            locate++;
            return;
        }
        
        hanoi(answer,n-1,from,aux,to);
        answer[locate][0]=from;
        answer[locate][1]=to;
        locate++;
        hanoi(answer,n-1,aux,to,from);
        
    }
}