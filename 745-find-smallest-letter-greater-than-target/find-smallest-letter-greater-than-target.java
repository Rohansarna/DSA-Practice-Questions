class Solution {
    public char nextGreatestLetter(char[] letter, char target) {
        int i = 0; 
        int n = letter.length; 
        int j = letter.length; 
        while(i < j ){
            int mid = (i + j )/ 2; 
            
            if(letter[mid] >  target){
                j = mid;
            }
            else {
                i = mid + 1; 
            }
        }
        return letter[j %n ]; 
    }
}