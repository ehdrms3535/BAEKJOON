import java.util.*;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        while (n > 0) {
            answer += n % 10;  // 가장 오른쪽 자릿수 더함
            n /= 10;           // 자릿수를 하나 줄임
        }
        return answer;
    }
}