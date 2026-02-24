class Solution {
    
    public static int getGCD(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    public static int getLCM(int a, int b) {
        return (a * b) / getGCD(a, b);
    }
    public int solution(int[] arr) {
        int answer = 1;
        
        for(int i=0;i<arr.length;i++){
            answer = getLCM(answer,arr[i]);
        }
        return answer;
    }
}