class Solution {
    
    public boolean isPrime(long n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        for (long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    public int check(String a){
        int answer = 0;
        String[] arr = a.split("0");
        
        for (String t : arr) {
            if (t.isEmpty()) continue;          // 빈 문자열 방지
            long val = Long.parseLong(t);       // 문제 특성상 long이 안전
            if (isPrime(val)) answer++;
        }
        return answer;
    }
    
    public int solution(int n, int k) {
        int answer = check(Integer.toString(n, k));
        return answer;
    }
}