#include<bits/stdc++.h>
using namespace std;
vector<int>nums{3,5,0,3,4};
int glo;
    bool comp(int a,int b){
        for(;a<=b;a++){
            if(glo<nums[a]){}
        }
        return 0;
    }
  bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j;
            glo=nums[i];
            auto x=max_element(nums.begin()+1,nums.end());
            if(nums[i]<*x){
                j=x-nums.begin();
                cout<<nums[i]<<" "<<nums[j]<<" index -> "<<j;}
            else
                continue ;
            x=comp(nums.begin()+j,nums.end());
            cout<<" "<<*x<<endl;
            if(nums[j]>*x && glo<*x)
                return true;
        }
        return false;
    }
int main(){   
   // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   
    freopen("output.txt", "w", stdout);
     int n=nums.size();
     int i=0;
    auto x=max_element(nums.begin()+1,nums.end());
    cout<<find132pattern(nums);
}