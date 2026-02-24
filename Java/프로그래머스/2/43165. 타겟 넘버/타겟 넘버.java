class Solution {
    int answer = 0;
    public void check(int[] numbers, int target, int sum, int locate){
        if(locate == numbers.length) {
            if(sum == target) answer++;
            return;
        }
        check(numbers, target, sum+numbers[locate],locate+1);
        check(numbers, target, sum-numbers[locate],locate+1);
    }
    public int solution(int[] numbers, int target) {
        check(numbers,target,0,0);
        return answer;
        
    }
}