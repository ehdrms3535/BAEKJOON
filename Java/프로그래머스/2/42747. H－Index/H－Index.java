import java.util.*;

class Solution {
    public int solution(int[] citations) {
        int answer = 0;
        int max = 0;
        Arrays.sort(citations);
        for(int i=0; i<citations.length;i++){
            if(citations.length -i <= citations[i]) return citations.length-i;
        }
        return 0;
    }
}

// 3(2)번 이상 이용된 논문이 3편이상(길이) 