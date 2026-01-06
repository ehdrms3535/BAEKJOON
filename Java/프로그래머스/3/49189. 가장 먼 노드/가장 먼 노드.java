import java.util.*;

class Solution {
    public int solution(int n, int[][] edge) {
        List<List<Integer>> adj = new ArrayList<>();
        for (int i = 0; i <= n; i++) adj.add(new ArrayList<>());
        for (int[] e : edge) {
            adj.get(e[0]).add(e[1]);
            adj.get(e[1]).add(e[0]);
        }

        int[] distances = new int[n + 1];
        Arrays.fill(distances, -1); // 방문하지 않은 노드는 -1
        distances[1] = 0;

        
        Queue<Integer> queue = new LinkedList<>();
        queue.add(1);

        while (!queue.isEmpty()) {
            int curr = queue.poll();
            for (int neighbor : adj.get(curr)) {
                if (distances[neighbor] == -1) { // 아직 방문하지 않았다면
                    distances[neighbor] = distances[curr] + 1;
                    queue.add(neighbor);
                }
            }
        }

        // 4. distances 배열(1차원)에서 최댓값 개수 찾기
        int maxVal = 0;
        for (int d : distances) {
            if (d > maxVal) maxVal = d;
        }

        int answer = 0;
        for (int d : distances) {
            if (d == maxVal) answer++;
        }

        return answer;
    }
}
