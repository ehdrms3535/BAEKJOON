class Solution {
    public int[] solution(String s) {
        int[] answer = new int[2];
        
        int triger = 0;
        while(!s.equals("1")){
            answer[0]++;
            
            int tmp = s.length();
            s = s.replace("0", "");
            answer[1]+=tmp-s.length();
            
            s= Integer.toBinaryString(s.length());  
        }
        return answer;
    }
}
