#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0)
        return 1;
    fun(n-1);
    cout<<n<<" ";
}
int main(){
    int n=5;
    fun(n);
}