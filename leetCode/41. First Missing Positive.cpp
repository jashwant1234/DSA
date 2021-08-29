class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(nums[i] <= 0){i++;
                continue;}
            int index = nums[i]-1;
            if(nums[i] < nums.size() && nums[i]!=nums[index])
                swap(nums[i],nums[index]);
            else
                i++;
        }
        for(i=0;i<nums.size();i++)
            if(nums[i] != i+1)
                return i+1;
        return i+1;
    }
};