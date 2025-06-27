class Solution {
    int max = 0;

    // 현재 front~rear 사이의 최대 우선순위 찾기
    public void find(int[] queue, int front, int rear) {
        max = 0;
        for (int i = front; i < rear; i++) {
            if (queue[i] > max) {
                max = queue[i];
            }
        }
    }

    public int solution(int[] priorities, int location) {
        int answer = 0;
        int n = priorities.length;
        int capacity = n * 5; // 충분히 크게 확보
        int[] queue = new int[capacity];

        // 큐 초기화
        System.arraycopy(priorities, 0, queue, 0, n);
        int front = 0;
        int rear = n;

        while (front < rear) {
            if (rear >= capacity) {
                // 안전 처리: 배열 크기 초과 방지
                throw new RuntimeException("Queue capacity exceeded");
            }

            // 최대값 계산
            find(queue, front, rear);

            if (queue[front] == max) {
                // 현재 문서가 인쇄됨
                answer++;
                if (location == 0) return answer;
                front++;
                location--;
            } else {
                // 뒤로 이동
                queue[rear++] = queue[front++];
                if (location == 0) {
                    location = rear - front - 1;
                } else {
                    location--;
                }
            }

            // location 음수 방지
            if (location < 0 || location >= (rear - front)) {
                throw new RuntimeException("Invalid location tracking");
            }
        }

        return answer; // 이론상 여기 도달하지 않음
    }
}
