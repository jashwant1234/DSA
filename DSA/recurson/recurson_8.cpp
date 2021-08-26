#include<bits/stdc++.h>
using namespace std;
int k=0;
set<string>Set;
void fun(string s,int i=0){
    if(i==s.length()-1){
        Set.insert(s);}
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        fun(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s;
    // cin>>s;
    s = "100000";
    fun(s);
    cout<<Set.size();
    // cout<<330/6;
}