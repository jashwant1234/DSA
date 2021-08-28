class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>uum;
        int n=nums1.size(),m=nums2.size();
        vector<int>vec;
        if(n>m){
        for(int i=0;i<n;i++)
            uum[nums1[i]]++;
        for(int i=0;i<m;i++){
            if(uum.find(nums2[i])!=uum.end()){
                uum[nums2[i]]--;
                vec.push_back(nums2[i]);                
            }
            if(uum[nums2[i]]==0)
                uum.erase(nums2[i]);
            
        }
        }
        else{
        for(int i=0;i<m;i++)
            uum[nums2[i]]++;
        for(int i=0;i<n;i++){
            if(uum.find(nums1[i])!=uum.end()){
                uum[nums1[i]]--;
                vec.push_back(nums1[i]);                
            }
            if(uum[nums1[i]]==0)
                uum.erase(nums1[i]);
            
        }
    }
        return vec;
    }
};