#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
#define mod 1000000007
using namespace std;
void show(vector<int> vec)
    {
            for(auto i:vec)
        cout<<i<<" ";
        cout<<endl;
    }
bool big_number(string str1,string str2)
{
        int n1 = str1.length(), n2 = str2.length(); 
  
    if (n1 < n2) 
       return true; 
    if (n2 < n1) 
       return false; 
     for (int i=0; i<n1; i++) 
    { 
       if (str1[i] < str2[i]) 
          return true; 
       if (str1[i] > str2[i]) 
          return false; 
    } 
    return 0;
};
bool comp()
{
    return 0;
};
int reversort(vector<int>vec ,int pos){
        pos = min_element(vec.begin()+pos,vec.end()) - vec.begin();
    return pos;   
}
int main()
{
  clock_t clk_start = clock();
    fast
    #ifndef ONLINE_JUDGE
       freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
     #endif
    ll t;
    cin>>t;
    ll k =1;
    while(t--){
        ll n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
            cin>>vec[i];
        ll sum = 0;
        for(int i=0;i<n-1;i++){
            int min_pos = reversort(vec,i);
            reverse(vec.begin()+i,vec.begin()+min_pos+1);
            // show(vec);
            sum+=min_pos-i+1;   
            // cout<<sum<<endl;         
        }
    cout<<"Case #"<<k<<": "<<sum<<endl;
    k++;
    }
return 0;
}