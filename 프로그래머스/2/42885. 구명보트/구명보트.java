import java.util.*;

class Solution {
    public int solution(int[] people, int limit) {
        int answer = 0;
        int front = 0;
        int back = people.length - 1;
        
        Arrays.sort(people);
        
        while(true)
        {
            if(front>back)
            {
                break;
            }else if(front==back)
            {
                answer++;
                break;
            }
            else if(people[front]+people[back] <= limit)
            {
                answer++;
                front++;
                back--;
            }else if(people[front]+people[back] > limit)
            {
                answer++;
                back--;
            }
        }
        
        return answer;
    }
}