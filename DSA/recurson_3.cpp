#include<bits/stdc++.h>
using namespace std;
bool fun(string str,int start,int end){
    if(start>=end)
        return true;
 return str[start]==str[end]&&fun(str,start+1,end-1);
}
int main(){
    string str="abdcdba";
    cout<<fun(str,0,str.length()-1);
}