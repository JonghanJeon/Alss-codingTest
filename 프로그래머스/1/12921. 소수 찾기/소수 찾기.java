import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = 2;
        if (n == 2) return 1;
        
        for(int i=2; i<=n; i++) {
            boolean isPrime = false;
            for(int j=2; j<=Math.sqrt(i); j++) {
                if(!(i%j == 0)) {
                    isPrime = true;
                } else {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) answer++;
        }
        
        return answer;
    }
}