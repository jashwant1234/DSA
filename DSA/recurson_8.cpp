#include<bits/stdc++.h>
using namespace std;
void fun(string s,int i=0){
    if(i==s.length()-1)
        cout<<s<<" ";
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        fun(s,i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s="ABC";
    fun(s);
}