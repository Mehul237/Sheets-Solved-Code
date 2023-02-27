
/*
 --------------------------------------------------------------------------------------------------
LEETCODE                                                                                          +
                                                                                                  +
2. Running Sum of 1d Array                                                                        +
                                                                                                  +
Q -> https://leetcode.com/problems/running-sum-of-1d-array/description/                           +
S -> https://drive.google.com/file/d/1dcgrox-LsesX12naC-VvP-P0zcGpftQO/view?usp=share_link        +
                                                                                                  +
 STEP-1: Instead of computing from Started-index,                                                
            USE the Previous sum to add it to the Current value
            
  Complexity:
              Time  -> o(n)
              Space -> 0(n) 
 --------------------------------------------------------------------------------------------------
 */


class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};
