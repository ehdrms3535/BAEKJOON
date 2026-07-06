class Solution {
    public boolean check(int brown, int yellow,int i){
        int total = yellow+brown;
        for(int j=1;j<=i-2;j++){
            if(yellow%j==0){
                int x = yellow/j;
                int y = j;
                if((x+2)*2+y*2 == brown){
                    return true;
                }
            }
        }
        return false;
    }
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        int total = brown + yellow;
        for(int i=2; i<total; i++){
            if(total%i==0){
                if(check(brown,yellow,i)){
                    answer[0] = total/i;
                    answer[1] = i;
                    break;
                }
            }
        }
        return answer;
    }
}