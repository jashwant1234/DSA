#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1)
        return 1;
    return n*(n+1)/2;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}

