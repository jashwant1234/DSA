class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>k;int flat =1;
        for(int i=0;i<nums.size()-1 && flat;i++)
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]+nums[j] == target){
                    k.push_back(i);
                    k.push_back(j);
                    flat = 0;
                    break;
                }                
                    return k;
    }
};