#include <bits/stdc++.h>
#define begin begin()
#define end end()
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
#define mod 1000000007
using namespace std;
void show(vector<ll> vec)
    {
            for(auto i:vec)
        cout<<i<<" ";
        cout<<endl;
    }
vector<int> remove_duplicate(vector<int>vec)
    {
        sort(vec.begin,vec.end);
        vec.resize(distance(vec.begin,unique(vec.begin,vec.end)));
        return vec;
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
int main()
{
  clock_t clk_start = clock();
    fast
    #ifndef ONLINE_JUDGE
       freopen("../../input.txt", "r", stdin);
        freopen("../../output.txt", "w", stdout);
     #endif
    cout<<"fadf";
return 0;
}