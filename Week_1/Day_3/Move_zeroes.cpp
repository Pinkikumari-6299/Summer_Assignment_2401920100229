class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int nonzeroindex=0;
    int n=nums.size();
    
    for(int i=0;i<n;++i)

    {
     if(nums[i]!=0)
     {
    swap(nums[nonzeroindex],nums[i]);
    nonzeroindex++;
     }
    }
        
    }
};