class Solution {
    public int solution(int n) {
        int tmp = n-1;
        int i;
        for(i=2; tmp%i>0;i++){}
        return i;
    }
}