#include "bits/stdc++.h"
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
template <class T> void _print(unordered_set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(unordered_map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T,size_t n> void _print(T (&arr)[n]);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T,size_t n> void _print(T (&arr)[n]) {cerr << "[ ";ll size = sizeof(T)*n/sizeof(arr[0]); for(T i=0;i<size;i++) {_print(arr[i]); cerr << " ";} cerr << "]";}


int main()
{
    fastIo
    clock_t clk_start = clock();
    int t;
    cin>>t;
    while(t--){
        int r, c;
        cin>>r>>c;
        int arr[r][c];
        int maxi = INT_MIN;

        for(int i=0;i<r;i++) {
            for(int j=0;j<c;j++) {
                cin>>arr[i][j];
                maxi = max(maxi, arr[i][j]);
            }
        }

        // cout<<"maxi"<<maxi<<endl;

        int max_idx_r = -1, max_ele_r = 0;
        for(int i=0;i<r;i++) {
            int count = 0;
            for(int j=0;j<c;j++) {
                if(arr[i][j] == maxi)
                    count++;
            }
            if(count > max_ele_r) {
                max_ele_r = count;
                max_idx_r = i;
            }
        }

        int max_idx_c = -1, max_ele_c = 0;
        for(int i=0;i<c;i++) {
            int count = 0;
            for(int j=0;j<r;j++) {
                if(arr[j][i] == maxi)
                    count++;
            }
            if(count > max_ele_c) {
                max_ele_c = count;
                max_idx_c = i;
            }
        }

        if(max_ele_r >= max_ele_c) {

            for(int j=0;j<c;j++) {
                if(arr[max_idx_r][j]==maxi)
                    arr[max_idx_r][j]--;
            }
        
            int ans = 0;
            for(int i=0;i<c;i++) {
                int count = 0;
                for(int j=0;j<r;j++) {
                    if(arr[j][i] == maxi)
                        count++;
                }
                if(count > 0) {
                    ans++;
                }
            }
            
            if(ans <= 1)
                cout<<maxi - 1<<endl;
            else    
                cout<<maxi<<endl;
        
        }
        else {
            for(int j=0;j<r;j++) {
                if(arr[j][max_idx_c]==maxi)
                    arr[j][max_idx_c]--;
            }
        
            int ans = 0;
            for(int i=0;i<r;i++) {
                int count = 0;
                for(int j=0;j<c;j++) {
                    if(arr[i][j] == maxi)
                        count++;
                }
                if(count > 0) {
                    ans++;
                }
            }
            
            if(ans <= 1)
                cout<<maxi - 1<<endl;
            else    
                cout<<maxi<<endl;
        }
    }

    #ifndef ONLINE_JUDGE
    cerr << "Execution Time: " << fixed << double(clock() - clk_start) / double(CLOCKS_PER_SEC) << setprecision(6) << " sec\n";
    #endif
return 0;
}