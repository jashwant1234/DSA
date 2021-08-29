class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        while(i<nums.size()){
            int corect = nums[i];
            if(nums[i]<nums.size() && nums[i]!=nums[corect])
                swap(nums[i],nums[nums[i]]);
            else
                i++;
        }
        for(i=0;i<nums.size();i++)
                if(i != nums[i])
                    return i;
        return i;
    } 
};