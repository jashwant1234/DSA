#include<bits/stdc++.h>
using namespace std;
int number_of_digits(int n){
   return log10(n)+1;
}
int main(){
    int n;
    cin>>n;
    
    cout<<number_of_digits(n);
}

