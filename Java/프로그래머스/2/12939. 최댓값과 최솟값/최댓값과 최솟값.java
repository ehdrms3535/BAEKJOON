import java.util.*;

class Solution {
    public String solution(String s) {
        String answer = "";
        String[] resource = s.split(" ");
        int[] arr = new int[resource.length];
        
        for(int i=0; i<resource.length;i++){
            arr[i] = Integer.parseInt(resource[i]);            
        }
        Arrays.sort(arr);
        
        answer = arr[0] + " " + arr[arr.length-1];
        return answer;
    }
}