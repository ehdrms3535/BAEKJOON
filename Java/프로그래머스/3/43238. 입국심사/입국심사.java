import java.util.*;

class Solution {
    public long solution(int n, int[] times) {
        Arrays.sort(times);
        long answer = 0;
        long hi = (long) times[times.length-1]*n;
        long lo = 0;
        while(lo <= hi){
            long mid = (hi + lo)/2;
            long count = 0;
            for(int i=0;i<times.length;i++){
                count+=mid/times[i];
                if(count>=n) break;
            }
            
            if(count>=n){
                answer = mid;
                hi = mid-1;
            }   
            else if( count<n) lo = mid + 1;
        }
        return answer;
    }
}