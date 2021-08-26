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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T,size_t n> void _print(T (&arr)[n]) {cerr << "[ ";ll size = sizeof(T)*n/sizeof(arr[0]); for(T i=0;i<size;i++) {_print(arr[i]); cerr << " ";} cerr << "]";}

class myhash
{
    int *arr;
    int size;
    int cap;
public:
    myhash(int s){
        size = 0;
        cap = s;
        arr = new int[cap];
        for(int i=0; i<cap;i++)
            arr[i]=-1;

    }
    int h1(int n){
        if(arr[n%cap] == -1)
            return n%cap;
        else
            return h2(n%cap,cap-1,n);
    }
    int h2(int h1val,int cap,int n){
        for(int i=1;i<cap;i++){
            int val = (h1val+(i*(cap-(n%cap))))%(cap+1);
            if(n==52)
                debug(val);
            if(arr[val] == -1)
                return val;
        }
    }
    void insert(int n){
        int i=h1(n);
        arr[i]=n;
    }   
    void _p(){
        for(int i=0;i<cap;i++)
            cout<<arr[i]<<" ";
    }
    bool search(int n){
        int h = n%cap;
        debug(h);
        int i = h ,k = 1;
        while(arr[i]!=-1){
            debug(i);
            if(arr[i] == n)
                return true;
            int cap1 = cap-1;
            i = (h+(k*(cap1-(n%cap1))))%(cap1+1);
            k++;
            if(i == h)
                return false;
        }
        return false;
    }
    
};
int main()
{
    fastIo
    clock_t clk_start = clock();
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       freopen("Error.txt", "w", stderr);
     #endif
    myhash mh(7);
    mh.insert(49);
    mh.insert(63);
    mh.insert(56);
    mh.insert(52);
    mh.insert(54);
    mh.insert(48);
    mh._p();
    cout<<mh.search(54);
    #ifndef ONLINE_JUDGE
    cerr << "Execution Time: " << fixed << double(clock() - clk_start) / double(CLOCKS_PER_SEC) << setprecision(6) << " sec\n";
    #endif
return 0;
1 false
2 3
3 2
4 1
5 1
6 1
7 3
8 1
9 1
10 1
}





