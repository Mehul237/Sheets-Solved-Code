

/*
------------------------------------------------------------------------
Ex: 

Input:  A = 10, B = 20
Output: 4
Explanation:

  A  ->  0 1 0 1 0
  B  ->  1 0 1 0 0 
--------------------
A ^ B :  1 1 1 1 0   (Convert A to B)


 Step-01: Xor A and B

 Step-02: After Xor cnt the number of odd and cnt++ in that case and 
          right shift the next bit
 
----------------------------------------------------------------------
*/


class Solution {
    public:

    int countBitsFlip(int a, int b) {
        
        // Step-01
        int xorAandB = a ^ b;
        int cnt = 0;
        
        while(xorAandB) {
           
           // Step-02
           if(xorAandB & 1) // If it is odd then, cnt++
              cnt++;
              xorAandB >>= 1;
        }
        return cnt++;        
    }
};
