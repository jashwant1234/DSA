class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int index = nums[i]-1;
            if(nums[i]!=nums[index])
                swap(nums[i],nums[index]);
            else
                i++;
        }
        vector<int>vec;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=i+1)
                vec.push_back(nums[i]);
        }
        return vec;
    }
};