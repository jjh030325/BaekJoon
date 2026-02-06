class Solution {
    public String solution(String s) {
        String answer = "";
        String[] arr = s.split(" ");
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        
        for(int i=0;i<arr.length;i++)
        {
            int value = Integer.parseInt(arr[i]);
            if(min>value) {
                min = value;
            }
            if(max<value) {
                max = value;
            }
        }
        
        answer = min + " " + max;
        return answer;
    }
}