import java.util.*;
class Solution {
    public int solution(int[] A, int[] B) {
        int answer = -1;
        Arrays.sort(A);
        Arrays.sort(B);
        int x=0;
        int y=0;
        while(true){
            if(y==B.length) break;
            if(A[x]<B[y]){
                answer++;
                x++;
                y++;
            }
            else if(A[x]>B[y]){
                y++;
            }
            else if(A[x]==B[y]){
                y++;
            }
            
        }
        if(answer==-1) answer=0;
        else answer+=1;
        return answer;
    }
}