class Solution {
    public int[] solution(int n) {
        // 1. 삼각형을 채울 2차원 배열 선언 (행의 크기가 유동적)
        int[][] board = new int[n][n];
        
        // 2. 방향 설정: 아래(↓), 오른쪽(→), 대각선 왼쪽 위(↖)
        int[] dx = {1, 0, -1};
        int[] dy = {0, 1, -1};
        
        int x = -1, y = 0; // 시작 위치 (첫 이동 시 0,0이 되도록 설정)
        int num = 1;       // 채워넣을 숫자
        int dir = 0;       // 현재 방향 인덱스
        
        // 3. 외곽에서 안쪽으로 회전하며 숫자 채우기
        // n단계의 이동이 있으며, 각 단계마다 이동 거리가 n, n-1, n-2 ... 1로 줄어듦
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                x += dx[dir];
                y += dy[dir];
                board[x][y] = num++;
            }
            // 한 방향 진행이 끝나면 다음 방향으로 전환 (0 -> 1 -> 2 -> 0)
            dir = (dir + 1) % 3;
        }
        
        // 4. 2차원 배열의 결과를 1차원 배열로 순서대로 정렬
        int[] answer = new int[n * (n + 1) / 2];
        int index = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                answer[index++] = board[i][j];
            }
        }
        
        return answer;
    }
}
