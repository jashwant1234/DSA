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
    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    //    freopen("Error.txt", "w", stderr);
    //  #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arra[n];
        int arrb[n];
        vector<pair<int, int>>ans;
        int total = 0;

        for(int i = 0;i<n;i++)
            cin>>arra[i];

        for(int i = 0;i<n;i++)
            cin>>arrb[i];

        bool swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arra[j] > arra[j + 1]) {
                    swap(arra[j], arra[j + 1]);
                    swapped = true;
                    ans.push_back({1, j+1});
                    total++;
                }
            }
        
            // If no two elements were swapped, then break
            if (!swapped)
                break;
        }

            for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arra[j] > arra[j + 1]) {
                    swap(arrb[j], arrb[j + 1]);
                    swapped = true;
                    ans.push_back({2, j+1});
                    total++;
                }
            }
        
            // If no two elements were swapped, then break
            if (!swapped)
                break;
        }

        for(int i=0;i<n;i++) {
            if(arra[i] > arrb[i]) {
                swap(arra[i], arrb[i]);
                    ans.push_back({3, i+1});
                    total++;
            }
        }
        cout<<total<<endl;
        for(auto it: ans) {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
    #ifndef ONLINE_JUDGE
    cerr << "Execution Time: " << fixed << double(clock() - clk_start) / double(CLOCKS_PER_SEC) << setprecision(6) << " sec\n";
    #endif
return 0;
}