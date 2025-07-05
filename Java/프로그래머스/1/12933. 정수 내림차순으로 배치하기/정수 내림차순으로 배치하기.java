import java.util.*;
class Solution {
    public long solution(long n) {
        char[] digits = Long.toString(n).toCharArray();
        Arrays.sort(digits);
  
        StringBuilder sb = new StringBuilder(new String(digits)).reverse();

        return Long.parseLong(sb.toString());

    }
}