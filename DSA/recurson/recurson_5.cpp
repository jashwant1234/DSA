#include<bits/stdc++.h>
using namespace std;
int fun(int n,int a,int b,int c){
    if(n==0)
        return 0;
    if(n<0){
        return -1;
    }
    int res = max(fun(n-a,a,b,c),fun(n-b,a,b,c));
    res = max(res,fun(n-c,a,b,c));
    if(res == -1)
        return -1;
    return res+1;
}
int main(){
    int n=5,a=1,b=5,c=1;
    cout<<fun(n,a,b,c);
}