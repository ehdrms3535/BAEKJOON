import java.util.Arrays;
class Solution {
    public int solution(int k, int[] tangerine) { 
        int max = 0;
        for(int i=0; i<tangerine.length;i++) {
            max = (max<tangerine[i])?tangerine[i]:max;
        }
        int[] arr = new int[max+1];
        int answer = 0;
        for(int i=0; i<tangerine.length;i++){
            arr[tangerine[i]]++;
        }
        Arrays.sort(arr);
        int sum=0;
        for(int j=arr.length-1; j>0; j--){
            sum +=arr[j];
            answer++;
            if(sum>=k) break;
        }
        return answer;
    }
}