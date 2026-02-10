class Solution {
    public boolean find(int i,int n){
        int check =0;
        for(int j=i; check<=n; check+=j++){
            if(n == check) return true;
        }
        return false;
    }
    
    public int solution(int n) {
        int answer = 0;
        for(int i=1; i<=n;i++){
            if(find(i,n)) answer++;
        }
        return answer;
    }
}