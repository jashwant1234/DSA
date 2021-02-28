#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
#define mod 1000000007
using namespace std;
void show(vector<string> vec)
    {
            for(auto i:vec)
        cout<<i<<" ";
        cout<<endl;
    }
// vector<int> remove_duplicate(vector<int>vec)
//     {
//         sort(vec.begin,vec.end);
//         vec.resize(distance(vec.begin,unique(vec.begin,vec.end)));
//         return vec;
//     }
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
pair<int,int> element(vector<pair<pair<int,int>,pair<string,int>>>road, string str){

}
int main()
{
  clock_t clk_start = clock();
    fast
    #ifndef ONLINE_JUDGE
       freopen("f.txt", "r", stdin);
        freopen("f_ans.txt", "w", stdout);
     #endif
    int sim,inter,streets,cars,scores;
    cin>>sim>>inter>>streets>>cars>>scores;
    // vector<pair<pair<int,int>,pair<string,int>>>road;
    unordered_map<string,pair<int,int>>road;
    int n=streets;
    while(n--){
        int k,l,j;
        string str;
        cin>>k>>l>>str>>j;
        //road.push_back(make_pair(make_pair(k,l),make_pair(str,j)));
        road[str] = make_pair(l,j);
    }
    n=cars;
    unordered_map<int,set<pair<string,int>>>result;
    while(n--){
        int k,m;
        cin>>k;
        m=k;
        while(m--){
            string str1;
            cin>>str1;
            pair<string,int>ml;
            ml.first=str1; 
             ml.second=road[str1].second;
             result[road[str1].first].insert(ml);
        }
    }
    // cout<<sim<<" "<<inter<<" "<<streets<<" "<<cars<<" "<<scores<<endl;

    // for(auto i:road)
    //     cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    // for(auto i:cars_path){
    //     cout<<i.first<<" ";show(i.second);}
  
    // while(cars--){
    //     for(auto i:cars_path){
    //                 //auto m=element(road,q);
    //                 //auto m = find(i.second.begin(),i.second.end(),j.second.first);
                        
    //         }
    // }
    cout<<result.size()<<endl;
    for(auto k:result){
        cout<<k.first<<endl<<k.second.size()<<endl;
        for(auto m:k.second){
            cout<<m.first<<" "<<m.second<<endl;
        }
    }
return 0;
}