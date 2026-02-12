import java.util.*;
class Solution {
    public boolean solution(String[] phone_book) {
        Arrays.sort(phone_book);
        String tmp = phone_book[0];
        for(int i=1; i<phone_book.length; i++){
            if(phone_book[i].startsWith(tmp)){ 
                return false;                                             
            }
            tmp = phone_book[i];
        }
        return true;
    }
}