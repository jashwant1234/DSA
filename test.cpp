#include <bits/stdc++.h>
#define begin begin()
#define end end()
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F first
#define S second
#define PI 3.14159265
using namespace std;
int divisorSubstrings(int n, int k) {
set<int>a;
int m=n;
while(n>pow(10,k-1) )
{
    int l=pow(10,k);
    int x=n%l;
    //cout<<x<<endl;
    n/=10;
    a.insert(x);
    }
    int c=0;
    for(auto i:a)
    {
    
        if(m%i==0 && i!=0)
           c++;
    }
    return c;
}

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.F > b.F); 
}
long long int fact(long long int N)
    {
        if(N==0)
           return 1;
        return (N*fact(N-1));   
    }
int digitsInFactorial(int N)
{
    return(floor(log10(fact(N))+1));
    // code here
}
int exactly3Divisors(int N)
{
    int count=0;
    N=sqrt(N);
    cout<<N<<" ";
    vector<bool>prime(N,true);
    for(int i=2;i<=N;i++)
    {
        if(prime[i]){count++;
            for(int k=i*i;k<=N;k+=i)
                prime[k]=false;
        }
    }
   
    return count;
    //Your code here
}
int main() {
     clock_t clk_start = clock();
    fast
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
     #endif
     int k,n;
     cin>>n>>k;
     divisorSubstrings(n,k);
	return 0;
}