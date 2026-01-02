import java.util.*;
import java.util.stream.Collectors;
class Solution {
    public int[] solution(String[] genres, int[] plays) {
        Map<String, Integer> genrePlayCount = new HashMap<>();
        for(int i=0; i<plays.length;i++){
            String genre = genres[i];
            int play = plays[i];
            genrePlayCount.put(genre, genrePlayCount.getOrDefault(genre, 0) + play);
        }  
        List<String> sortedGenres = genrePlayCount.keySet().stream()
            .sorted((g1, g2) -> genrePlayCount.get(g2) - genrePlayCount.get(g1))
            .collect(Collectors.toList());
        
        List<Integer> resultList = new ArrayList<>(); // 결과 크기가 가변적이므로 List 사용

        for(int i=0; i<sortedGenres.size(); i++){
            String currentGenre = sortedGenres.get(i);
            int first = -1;  // 인덱스는 -1로 초기화해야 안전함
            int second = -1;

            for(int j=0; j<genres.length; j++){
                if(currentGenre.equals(genres[j])){
                    if (first == -1 || plays[j] > plays[first]) {
                        second = first; // 기존 1등이 2등으로 밀려남
                        first = j;
                    }
                    else if (second == -1 || plays[j] > plays[second]) {
                        second = j;
                    }
                }
            }
            
            if(first != -1) resultList.add(first);
            if(second != -1) resultList.add(second);
        }
        
        return resultList.stream().mapToInt(Integer::intValue).toArray();
    }
}