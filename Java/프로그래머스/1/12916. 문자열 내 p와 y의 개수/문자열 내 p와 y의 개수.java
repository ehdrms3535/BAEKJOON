class Solution {
    boolean solution(String s) {
        boolean answer = true;
        
        int a=0;
        int b=0;
        
        for(int i=0;i<s.length();i++){
            if(Character.toLowerCase(s.charAt(i))=='p') a++;
            if(Character.toLowerCase(s.charAt(i))=='y') b++;
        
        }
        answer = (a==b)? answer:!answer;
        return answer;
    }
}