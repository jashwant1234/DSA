#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define vll vector<ll>
ll dp[2000+1][1000+1];
int fun(long long n){
        
    long long sr = floor(sqrt(n));
    if(sr*sr == n ){
        return (sr-1)*(sr-1);
    }else{
        //long long k=min(n-(sr*sr),(sr+1)*(sr+1)-n);
       return (n-(sr*sr))<((sr+1)*(sr+1)-n) ? n-(n-(sr*sr)) : n+((sr+1)*(sr+1)-n);
    }

}
long long minimumTimeHire2021(vector<ll> cars, vector<ll> bat_pos, ll dest) {
    vector<vector<ll> > dp(2001, vector<ll> (1001, INT_MAX));
	int n=cars.size();
	int k=bat_pos.size();
	for(int i=0;i<=2000;i++)
		for(int j=0;j<=1000;j++){
			if(i==0){
				dp[i][j]=0;
			}
		}
		
	vll rel_pos=bat_pos;
	ll ans=0;
	for(int i=0;i<bat_pos.size();++i){
		rel_pos[i]=abs(bat_pos[i]-dest);
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=k;++j){
			dp[i][j]=min(max(abs(bat_pos[j-1]-cars[i-1])+rel_pos[j-1], dp[i-1][j-1]), dp[i][j-1]);
		}
    }
	return dp[n][k];
}
int main() {
        #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
     #endif
    int n = 1;
    // cin>>n;

    while(n--)
    {
        long long num, num1;
        cin>>num>>num1;
        vector<ll> cars(num), bat_pos(num1);
        int pos;
        for(auto &i: cars)
        cin>>i;
        for(auto &i : bat_pos)
            cin>>i;
        cin>>pos;
        cout<<minimumTimeHire2021(cars, bat_pos, pos);
    }
	//code
	return 0;
}