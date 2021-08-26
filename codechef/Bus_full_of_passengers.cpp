#include<bits/stdc++.h>
using namespace std;

#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T,size_t n> void _print(T (&arr)[n]);
template <class T,size_t n> void _print(T (&arr)[n]) {cerr << "[ ";ll size = sizeof(T)*n/sizeof(arr[0]); for(T i=0;i<size;i++) {_print(arr[i]); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int main()
{
    fastIo
    clock_t clk_start = clock();
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);
     #endif
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        debug(n);
        debug(m);
        debug(q);
        vector<int>po(n+1,0);
        vector<int>no(n+1,0);
        int sum = 0,flag = 0;
        while(q--){
            char ch;
            cin>>ch;
            string str;
            cin>>str;
            if(!flag){
                 debug(str);
            if(ch=='+'){
                sum++;
                if(sum>m){
                    cout<<"Inconsistent"<<endl;
                    flag = 1;
                    continue;
                }
                // string str2=str.substr(1,str.length()-1);
                int num = stoi(str);
                if(po[num]){
                    cout<<"Inconsistent"<<endl;
                    flag = 1;
                    continue;
                }
                po[num]=1;
            }else{
                // string str2=str.substr(1,str.length()-1);
                int num = stoi(str);
                debug(str2);
                if(po[num]==0){
                 cout<<"Inconsistent"<<endl;
                    flag = 1;
                    continue;
                }
                if(no[num]==1){
                 cout<<"Inconsistent"<<endl;
                    flag = 1;
                    continue;
                }
                no[num]=1;
                sum--;
                debug(sum);
            }}
        }
        if(!flag)
            cout<<"Consistent"<<endl;
    }






    #ifndef ONLINE_JUDGE
    cerr << "Execution Time: " << fixed << double(clock() - clk_start) / double(CLOCKS_PER_SEC) << setprecision(6) << " sec\n";
    #endif
return 0;
}