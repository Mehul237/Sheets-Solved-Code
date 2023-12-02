
/*
----------------------------------------------------------------------------

Method - 1: Simple method AND, Right shift (Yogesh and Shailesh)

  Intuition: 
- Loop through all bits in an integer, check if a bit is set and if it is, 
  then increment the set bit count. 


1 - Simple method
2 - Assignment operator and some changes in code for better insight through code lines
3 - Recursive approach

Time Complexity: O(log n) 
Auxiliary Space: O(1)


----------------------------------------------------------------------------
*/


// 1 - Implementation - Simple method

class Solution {
  public:
    int setBits(int N) {
        
        int cnt = 0;
        
        while(N) {
            
            // Step-01: AND
            int bitMask = N & 1;
            
            if(bitMask) {
               cnt++;
            }
            
            // Step-02: Right Shift
            N = N >> 1;
        }
        return cnt;
    }
};




// 2 - Some changes in code for better insights

class Solution {
  public:
    int setBits(int N) {
        
        int cnt = 0;
        
        while(N) {
            
            // Step-01: AND
            cnt += N & 1;
            
            
            // Step-02: Right Shift
            N >>= 1;
        }
        return cnt;
    }
};




//  3 - Recursive approach

class Solution {
  public:
    int setBits(int N) {
        
      // base case
      if (N == 0)
         return 0;
      else
        // if last bit set add 1 else add 0
        return (N & 1) + setBits(N >> 1);
    }
};











/*
--------------------------------------------------------------------------------------------------------------------------

refer GFG article: https://www.geeksforgeeks.org/bit-tricks-competitive-programming/

  Method - 2: Clears the lowest set bit of x  (Anuj - DSA One course)

Intuition:

- if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. 
- If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 

- - The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer


Time Complexity: O(log n)
Auxiliary Space: O(1
--------------------------------------------------------------------------------------------------------------------------
*/


 // 01 - Simple

class Solution {
  public:
    int setBits(int N) {
        
        int cnt = 0;
        
        while(N) {
            
            // Step-01: N - 1 and AND with itself ( N & (N-1))
            N &= (N-1);   //  N = N & (N-1)
            cnt++;
            
        }
        return cnt;
    }
};


// 02 - Recursive approach

class Solution {
  public:
    int setBits(int N) {
        
        int cnt = 0;
        
        while(N) {
            
           // base case
           if (N == 0)
              return 0;
           else
             // if the set bit is 1 add 1 else add 0
              return 1 + setBits(N & (N - 1));
        }
        return cnt;
    }
};










/*
------------------------------------------------------------------

  Method - 3: Using built in function
               - Using lookup table

-- we can directly count set bits using __builtin_popcount(NUMS)

Time complexity: O(1)
Auxiliary space: O(1)
------------------------------------------------------------------
*/




class Solution {
  public:
    int setBits(int N) {
        return __builtin_popcount(N);
    }
};
