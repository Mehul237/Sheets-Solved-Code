class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int x=0;x<nums.size();++x)
        {
            int index=abs(nums[x])-1;
            if(nums[index]<0)
            ans.push_back(abs(nums[x]));
            else
            nums[index]=-nums[index];
        }


        return ans;
    }
};


/*
----------------------------------------------------
https://leetcode.com/submissions/detail/890722485/
---------------------------------------------------
*?
