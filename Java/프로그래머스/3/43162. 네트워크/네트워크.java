class Solution {
    public int solution(int n, int[][] computers) {
        int answer = 0;
        boolean[] visited = new boolean[n];
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                answer++;
                visit(i,visited,computers);
            }
        }  
        return answer;
    }
    
    public void visit(int n, boolean[] visited, int[][] computers){
        visited[n]=true;
        for(int i=0;i<computers.length;i++){
            if(computers[n][i]==1 && !visited[i]){
                visit(i,visited,computers);
            }  
        }
    }
}