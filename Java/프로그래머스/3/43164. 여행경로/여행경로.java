import java.util.*;

class Solution {
    public String[] solution(String[][] tickets) {
        Arrays.sort(tickets, (o1, o2) -> o1[1].compareTo(o2[1]));
        ArrayList<String> allPaths = new ArrayList<>();
        boolean[] visited = new boolean[tickets.length];
        
        //(출발지는 항상 ICN)
        dfs("ICN", tickets, 0,visited,allPaths);
        String[] answer = allPaths.toArray(new String[0]);
        return answer;

    }
    
    public boolean dfs(String des, String[][] tickets ,int count,boolean[] visited, ArrayList<String> allPaths){
        if(count == tickets.length) {
            allPaths.add(des);
            
            return true;
        }        
        
        for(int i=0; i<tickets.length;i++){
            if(tickets[i][0].equals(des) && !visited[i]) {
                visited[i] = true;
                allPaths.add(des);
                if(dfs(tickets[i][1],tickets,count+1,visited,allPaths)) {
                    return true;
                }
                allPaths.remove(allPaths.size()-1);
                visited[i] = false;
            }
        }
        return false;

    }
}

// 알파벳 순으로 갈 수 있는거 찾기
// visit으로 방문 처리
// 이후 갈공간 없으면 visit 리버스 후 이전으로 되돌아가기
// 만약 다돌았으면 return