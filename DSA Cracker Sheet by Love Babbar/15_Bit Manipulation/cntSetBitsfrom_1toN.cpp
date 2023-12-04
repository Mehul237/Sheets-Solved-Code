
// Brite force approach: It give the TLE because Q solution in O(LogN) time 

class Solution {
  public:
    int countSetBits(int N) {
    
        int cnt = 0;
    
        for(int i=1; i<=N; i++) {
        
            int num_value = i;
        
            while(num_value) {
            
              /*
              -----------------------------
                // Step-01: AND
                cnt += num_value & 1;
            
            
                // Step-02: Right Shift
                num_value >>= 1;
              ----------------------------
              */
              
              // Step-01: N - 1 and AND with itself ( N & (N-1))
              num_value &= (num_value - 1);   //  N = N & (N-1)
              cnt++;
              
            }
        }
        return cnt;
    }
};





/*
--------------------------------------------------------------
TC: O(N*logN) 

   - for counting set bits of every number we need logN time 
    because we divide the number by 2 every time and 
    we have to calculate for N numbers 
    so the overall complexity is O(N*logN)
    
SC: O(1) not using any extra space.
--------------------------------------------------------------
*/









// Expected approach

class Solution {
  public:

    int countSetBits(int n) {
       int count = 0;
      
       for (int i=1; i<=n; i <<= 1) {
           
          int k = (n / (i << 1)) * i + min(max (n % (i << 1) - i + 1, 0), i);
          count += k;
        } 
        return count;
    }
};





/*
--------------------------------------------------------------
TC: O(logN) 

    - We only have iterate through the number of bits in N
    
SC: O(1) 
   
   - Here we only using constant var without any extra space
--------------------------------------------------------------
*/
