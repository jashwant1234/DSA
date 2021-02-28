#include<bits/stdc++.h>
using namespace std;
bool recursiveSearch(vector<int>vec, int l,  
                            int r, int x) 
{ 
    if (r < l) 
        return false; 
    if (vec[l] == x) 
        return true; 
    if (vec[r] == x) 
        return true; 

    return recursiveSearch(vec, l + 1,r - 1, x); 
} 
int main(){
    vector<int>vec={1,4,2,3};
    int x=1;
    cout<<recursiveSearch(vec,0,vec.size()-1,x);
}