class Solution {
    int answer = 0;

    public void cal(int dis, int a) {
        if (dis > 0) answer += (dis + a - 1) / a;
    }
    
    public int solution(int n, int[] stations, int w) {
        int a = 2 * w + 1;
        
        int dis = stations[0] - w - 1;
        cal(dis, a);

        for (int i = 1; i < stations.length; i++) {
            dis = stations[i] - stations[i - 1] - a;
            cal(dis, a);
        }

        dis = n - (stations[stations.length - 1] + w);
        cal(dis, a);

        return answer;
    }
}
