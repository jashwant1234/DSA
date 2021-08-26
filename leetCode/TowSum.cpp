class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>k;
        unordered_map<int,int>uum;
        // int j=0;
        for(int i=0;i<nums.size();i++){
            auto it=uum.find(target-nums[i]);
            if(it!=uum.end()){
                k.push_back(it->second);
                k.push_back(i);
                return k;
            }
            uum[nums[i]]=i;
        }
         return k;
           
    }
};