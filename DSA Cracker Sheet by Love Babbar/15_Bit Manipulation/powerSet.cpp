
/*    

          4  2  1
-----------------------------------------------
  0 --->  0  0  0  : []
  1 --->  0  0  1  : [1]
  2 --->  0  1  0  : [2]
  3 --->  0  1  1  : [1, 2]
  4 --->  1  0  0  : [3]
  5 --->  1  0  1  : [1, 3]
  6 --->  1  1  0  : [2, 3]
  7 --->  1  1  1  : [1, 2, 3]

  pre-req:

  -- if ith bit is set or not?

  example:

    2  1  0
    --------
    1  0  1   (5)
  & 1  0  0   (1 << 2)
    - - - - 
    1  0  0


  --> ( N & (1 << i) ) != 0, then it is set



Time complexity : O(N*(2^N))
Space complexity : O(N*(2^N))

-----------------------------------------------
*/


class Solution {
public:
    
    

    vector<vector<int>> subsets(vector<int>& nums) {
    
        vector<vector<int >> ans;
        
        // N = 3  --> 2^3 = 8
        int size = nums.size();  
        
        // here,      pow(2, n)  from 0 to 7
        for(int i=0; i<(1<<size); i++) {
             
            vector <int> temp;

            // i = 5  -->  1  0  1  : [1, 3]
            //                   j
            for(int j=0; j<size; j++) {
                
                if(i & (1 << j) )   // 1-set, j=0 not, j=1 set then push
                   temp.push_back(nums[j]);
            }
            ans.push_back(temp);

        }
        return ans;
    }
};
