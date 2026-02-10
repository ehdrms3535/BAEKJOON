class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int left = 0;
        int right = 0; 
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == '(') left++;
            else right ++;
            if(left<right){
                answer = false;
                break;
            }          
        }
        if(left>right) answer = false; 
        return answer;
    }
}