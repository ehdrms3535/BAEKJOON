import java.util.*;

class Solution {


    public long getIndex(String s) {
        long idx = 0;
        int len = s.length();

        for (int i = 1; i < len; i++) {
            idx += Math.pow(26, i);
        }


        for (int i = 0; i < len; i++) {
            int ch = s.charAt(i) - 'a';
            idx += ch * Math.pow(26, len - i - 1);
        }

        return idx + 1;
    }


    public String makestring(long n) {
        String s = "";
        while (n > 0) {
            long b = n % 26;
            if (b == 0) {
                b = 26;
                n -= 26;
            }
            s = (char)(b + 96) + s;
            n /= 26;
        }
        return s;
    }


    public String solution(long n, String[] bans) {

        List<Long> banIndices = new ArrayList<>();
        for (String ban : bans) {
            banIndices.add(getIndex(ban));
        }

        Collections.sort(banIndices);
        long offset = 0;
        for (long banIdx : banIndices) {
            if (banIdx <= n + offset) {
                offset++;
            } else {
                break;
            }
        }

        return makestring(n + offset);
    }
}
