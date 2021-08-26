#include <bits/stdc++.h>
#define ll long long
#define fastIo ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
#define mod 1000000007
#define all(x) x.begin(),x.end()
using namespace std;
void show(vector<int> vec)
    {
            for(auto i:vec)
        cout<<i<<" ";
        cout<<endl;
    }
vector<int> remove_duplicate(vector<int>vec)
    {
        sort(vec.begin(),vec.end());
        vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));
        return vec;
    }
bool comp()
{
    return 0;
};
void countingSort(vector<int>&vec,int k){
    int n=vec.size();
    vector<int>count(k,0);
    for(int i=0;i<n;i++)
        count[vec[i]]++;
    for(int i=1;i<k;i++)
        count[i]+=count[i-1];
    // show(count);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[count[vec[i]]-1]=vec[i];
        count[vec[i]]--;
    }
    vec = ans;
}
int main()
{
    fastIo
    clock_t clk_start = clock();
    #ifndef ONLINE_JUDGE
       freopen("../input.txt", "r", stdin);
       freopen("../output.txt", "w", stdout);
     #endif
    vector<int>vec={9,3,2,4,6};
    int k = *max_element(all(vec));
    countingSort(vec,k+1);
    show(vec);
return 0;
}