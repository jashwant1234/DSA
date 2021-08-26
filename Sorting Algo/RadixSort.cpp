#include <bits/stdc++.h>
#define ll long long
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
#define mod 1000000007
#define all(x) x.begin(), x.end()
using namespace std;
int lk = 0;
    bool comp(pair<int,int>a,pair<int,int>b){
        return a.first>b.first;
    }
    // A[]: input array
    // N: size of array
    //Function to sort the array according to difference with given number.
    void sortABS(int arr[],int N, int k)
    {
        vector<pair<int,int>>vec(N);
        for(int i=0;i<N;i++){
            vec[i] = {abs(arr[i]-k),arr[i]};
        }
        sort(vec.begin(),vec.end(),comp);
         for(int i=0;i<N;i++){
            arr[i] = vec[i].second;
        }
        //Your code here
    }


void show(vector<int> vec)
{
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}
void countingSort(vector<int>&vec,int n,int exp){
    vector<int>count(10,0);
    for(int i=0;i<n;i++) 
        count[(vec[i]/exp)%10]++;
    for(int i=1;i<10;i++)
        count[i]=count[i-1]+count[i];
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        ans[count[(vec[i]/exp)%10]-1] = vec[i];
        count[(vec[i]/exp)%10]--;
    }
    vec = ans;
}
void radixSort(vector<int>&vec){
    int max = *max_element(vec.begin(),vec.end());
    int n = vec.size();
    for(int i=1;max/i > 0;i*=10){
        countingSort(vec,n,i);
    }
}
int main()
{
    fastIo
        clock_t clk_start = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int>vec = {333,234,90,3,23,54,6};
    radixSort(vec);
    show(vec);
#ifndef ONLINE_JUDGE
    cerr << "Execution Time: " << fixed << double(clock() - clk_start) / double(CLOCKS_PER_SEC) << setprecision(6) << " sec\n";
#endif
}