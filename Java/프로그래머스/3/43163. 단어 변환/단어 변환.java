import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

class Solution {
    int minSteps = Integer.MAX_VALUE;
    
    public boolean findonediff(String str1, String str2){
        int check = 0;
        for(int i=0; i<str1.length(); i++){
            if(str1.charAt(i) != str2.charAt(i)) check++;
            if(check>1) return false;
        }
        return check ==1;
    }
    
    public void dfs(String[] word, int answer, String str1,String str2, boolean[] visited){
        if (str1.equals(str2)) {
            minSteps = Math.min(minSteps, answer);
            return;
        }
        for (int i = 0; i < word.length; i++) {
            if (!visited[i] && findonediff(str1, word[i])) {
                visited[i] = true;
                dfs(word, answer + 1, word[i], str2, visited);
                visited[i] = false; // 다른 경로를 위해 해제 (백트래킹)
            }
        }
    }
    
    public int solution(String begin, String target, String[] words) {
        if (!Arrays.asList(words).contains(target)) return 0;
        int answer = 0;
        boolean[] visited = new boolean[words.length];
        dfs(words,answer,begin,target,visited);
        return minSteps == Integer.MAX_VALUE ? 0 : minSteps;
    }
}

/*
다음 가능 문자의 경우를 list로 뽑음 * 반복
그후 가장 작은 answer 도출
만약 전부 돌았는데 list가 없거나 가능하지 않으면 0
*/