class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>vec;
        int i=0;
        while(i<nums.size()){
            int index=nums[i]-1;
            if(nums[i]!=nums[index])
                swap(nums[i],nums[index]);
            else
                i++;
        }        
        for(i=0;i<nums.size();i++)
            if(nums[i]!=i+1){
                vec.push_back(nums[i]);
                vec.push_back(i+1);
            }
        return vec;
    }
};