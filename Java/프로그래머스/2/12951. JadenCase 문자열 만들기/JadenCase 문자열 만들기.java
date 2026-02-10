class Solution {
    public String solution(String s) {
        StringBuilder sb = new StringBuilder(s.toLowerCase());
        sb.setCharAt(0, Character.toUpperCase(sb.charAt(0)));
        for(int i=1; i<sb.length();i++){
            if(sb.charAt(i-1) == ' '){
                sb.setCharAt(i, Character.toUpperCase(sb.charAt(i)));
            }
        }
        return sb.toString();
    }
}