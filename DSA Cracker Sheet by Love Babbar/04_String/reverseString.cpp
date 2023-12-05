// Method-0
      
// TC: O(N), SC(N) because we need to store the answer


class Solution
{
    public:
    string reverseWord(string str) {

        string rev = "";
        
        //iterating over the characters of the string in reverse.
        for(int i = str.size()-1; i>=0; i--) {
            
            //appending the current character to the reversed string.
            rev += str[i];
        }
        
        //returning the reversed string.
        return rev;
      
    }
};








/*
----------------------------------------
  Method-1: Using in-built fn reverse

Time Complexity: O(n)
Auxiliary Space: O(1
-----------------------------------------
*/


class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());

    }
};









/*
----------------------------------------------------
Method - 02: Two pointer (Implement in-built reverse fn)

Time Complexity: O(n)
  - Since we need to traverse the complete string
Auxiliary Space: O(1)
  - no extra space needed
---------------------------------------------------
*/



class Solution {
public:
    void reverseString(vector<char>& s) {
      
        long long start = 0;
        long long end = s.size()-1;

        while(start <= end) {
          
            swap(s[start++], s[end--]);

          
/*
 Swap fn implemented,
 ------------------
           char temp = s[start];
           s[start] = s[end];
           s[end] = temp;
           
           start++;
           end--;
------------------
*/

          
          
        }
    }
};
