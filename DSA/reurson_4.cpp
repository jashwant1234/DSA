#include<bits/stdc++.h>
using namespace std;
int fun(int n,int k){
    if(n==0)
        return k;
    fun(n/10,k+(n%10));
}
int main(){
    int n=12345;
    cout<<fun(n,0); 
}