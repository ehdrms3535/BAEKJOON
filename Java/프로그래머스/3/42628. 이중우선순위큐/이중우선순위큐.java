import java.util.*;

class Solution {
    public int[] solution(String[] operations) {
        int[] answer = new int[2];
        List<Integer> list = new ArrayList<>();
        
        for(int i=0;i<operations.length;i++){
            char op = operations[i].charAt(0);
            int num = Integer.parseInt(operations[i].substring(2));
            switch(op) {
                case 'I':
                    list.add(num);
                    break;
                case 'D':
                    if(list.isEmpty()) break;
                    
                    if(num<0){
                        int min = Collections.min(list);
                        list.remove(Integer.valueOf(min));
                    }
                    else {
                        int max = Collections.max(list);
                        list.remove(Integer.valueOf(max));
                    }
                    break;
                default:
                    break;
            }
        }
        if(list.isEmpty()) {
            answer[0] = 0;
            answer[1] = 0;
            return answer;
        }
        
        int min = Collections.min(list);
        int max = Collections.max(list);
        answer[0] = max;
        answer[1] = min;
        return answer;
    }
}