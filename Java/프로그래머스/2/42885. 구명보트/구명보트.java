import java.util.*;
class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0;
        int[] a =  new int[241];
        for(int i=0; i<people.length;i++){
            a[people[i]]++;
        }
        int left = 0;
        int right = 240; 
        while (left <= right) {
            if (a[right] <= 0) { right--; continue; } 
            if (a[left] <= 0) { left++; continue; } 
            answer++;
            a[right]--;
            if (a[left] > 0 && left <= right && left + right <= limit) {
                a[left]--;
            } 
        }
        return answer;
    }
}
