class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int>uum;
        int i=0;
        int j=nums.size()-1;
        vector<int>vec;
        while(i<j){
         int sum=nums[i]+nums[j];
        if(sum==target)
        {vec.push_back(i+1);vec.push_back(j+1);return vec;}
        if(sum<target)
            i++;
        else
            j--;
        }
        return vec;
    }
};