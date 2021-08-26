#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>vec,int k,int i,int sum){
    if(i==vec.size()){
        if(k==sum)
            return 1;
        return 0;
    }
    return fun(vec,k,i+1,sum)+fun(vec,k+vec[i],i+1,sum);
}
int main(){
    vector<int>vec={10,20,30,20,30,10};
    int sum=30;
    cout<<fun(vec,0,0,sum);
}