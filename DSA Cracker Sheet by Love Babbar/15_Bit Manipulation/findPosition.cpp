
/*
-----------------------------------------------------------------------
Explanation:

- https://youtu.be/mt_x9grlEm0?feature=shared

 Example:

 (1)   1     0    0    0
      -------------------
       2^3  2^2  2^1  2^0
        8    4    2    1

  = log2(8) + 1
  =  3 + 1
  = 4

  ---> pow of 2



  (2)          1  0  0  0  (N)
  
           &   0  1  1  1  (N - 1)

           ------------------------
               0  0  0  0

      --->  log2(N) + 1
          = log2(8) + 1
          = 4



          
  (3)   1    0    1    1    0    0
       -----------------------------
       2^5  2^4  2^3  2^2  2^1  2^0
       32   16    8    4    2    1

       N  =   1    0    1    1    0    0
             -------------  ------------
              remain same    reverse

    N - 1 =   1    0    1    0    1    1 

          --------------------------------
              1    0    1   0     0    0

    ---> Not work, because is not a pow of 2




 TC: O(logN)
 SC: O(1)
-----------------------------------------------------------------------
*/


class Solution {
  public:
    // Function to find the position of the only set bit in the binary representation of N
    int findPosition(int N) {
        
        // Check if N is 0, in which case there is no set bit
        if(N == 0)
           return -1;

        // Check if N is a power of 2 (has only one set bit) using bitwise AND
        if ((N & (N-1)) == 0)
           // If it is a power of 2, return the position (1-indexed) of the set bit using logarithm base 2
           return log2(N) + 1;

        // If N is not a power of 2, return -1 indicating that it doesn't have exactly one set bit
        return -1;
    }
};
