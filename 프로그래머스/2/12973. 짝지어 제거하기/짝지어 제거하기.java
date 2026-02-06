import java.util.*;

class Solution
{
    public int solution(String s)
    {
        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray())
        {
            if(stack.isEmpty())
            {
                stack.push(c);
            }else
            {
                if(stack.peek().equals(c))
                {
                    stack.pop();
                }
                else{
                    stack.push(c);
                }
            }
        }
        int answer;
        if(stack.isEmpty())
        {
            answer = 1;
        }else
        {
            answer = 0;
        }

        return answer;
    }
}