
/*
----------------------------------------
  Method-0: Using in-built fn reverse

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
Method - 01: Two pointer (Implement in-built reverse fn)

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
