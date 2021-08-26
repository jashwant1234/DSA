#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
ll dp[2000 + 1][1000 + 1];
#define print(x) cout<< (#x) <<" : " << x << "\n";

int main()
{
    fastIo                       //*******************
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // int n = 1;
    // cin>>n;
    // int x, y, z;
    // tie(x, y, z) = make_tuple(10, 20, 30);     //*******************
    // cout << x << y << z;
    //------------------------------------------------------------------------------------------
    // vector<int>x{1,2,3};
    // for(auto &i:x){
    //     i=1;
    //     cout<<i;
    // }
    // cout<<endl;
    // for(auto i:x){
    //     cout<<i;
    // }
     
    // a number is a power of two or not
    // if((n&(n-1)) == 0)           //*******************
    //     cout<<true;
    // else
    //     cout<<false;
    // return 0;
//------------------------------------------------------------------------------------------
    //auto
    	
    // auto x = 10;
    // cout<< typeid(x).name() << endl;      //*******************
    
    // auto px  = &x;
    // cout<<*px<< typeid(px).name() << endl;
    
    // map<int, int> mp;
    // cout<< typeid(mp).name() << endl;
	
	// vector<int> vec = {1};
	// for( int elem :  vec){
	//     cout<< typeid(elem).name() << endl;
	// }
	
	// auto y   = 2.23;
	// cout<< typeid(y).name() << endl;
	
	// auto py = new auto(y);
	// cout<< typeid(py).name() << endl;

    //size_t               
    // size_t y = -12;                     //*******************
    // unsigned int x= -12;
    // cout<<x<<endl<<y;
    //------------------------------------------------------------------------------------------
    //typeid                                //*******************
     	
    // print(typeid(int).name());
    // print(typeid(float).name());
    // print(typeid(char).name());
    // print(typeid(string).name());
    // print(typeid(int*).name());
    // print(typeid(double).name());
    // print(typeid(char*).name());
    // print(typeid(float*).name());
	// print(typeid(double*).name());
	// print(typeid(set<int>()).name());
	// print(typeid(map<int,int>()).name());
	// print(typeid(set<int>::iterator).name());
	// print(typeid(vector<int>()).name());
	// print(typeid(size_t).name());
	// print(typeid(unsigned int).name());
	// print(typeid(long long).name());
	// print(typeid(int []).name());
	// print(typeid(pair<int,int>).name());
	// print(typeid(tuple<int,int, float>).name());
	// print(typeid(int&).name());
	// print(typeid(int**).name());


    //------------------------------------------------------------------------------------------
    //finding number of digits
    // int countdigits(long n){
    //     if(n == 0)
    //         return 0;
    //     return 1+countdigits(n/10);
    // }
    // abcdabcd
    // return floor(log10(n)+1)  ;                    //*******************
    // 
    // return 0;                                            //*******************
    
    
    
    //------------------------------------------------------------------------------------------
    
    // string str1,str2;

    // tie(str1,str2) = make_tuple("abcd","cdab");
    // int size = str1.length();
    // str1 = str1+str1;
    // auto flat = false;
    // for(int it = 0;it + size <= str1.length();it++){
    //     string str = str1.substr(it,size);               //*******************
    //     // cout<<str<<endl;
    //     if(str==str2){
    //         flat = true;
    //         cout<<"Yes";
    //         break;
    //         }
    // }
    // if(!flat){
    //     cout<<"No";
    // }

    // if(str1.find(str2) != string::npos) // string::nops is equal to -1  //******************
    //     cout<<"Yes";
    // else
    //    cout<<"NO";

    // cout << str1;

//--------------------------------------------------------------------------------------


//     string str = "jashu jash jashwant";                      
//    int n=str.size();int start = -1;               //******************
//     for(int i=0;i<n;i++){
//         if(str[i] == ' '){
//             int len = i - start;
//             // cout<<len<<" ";
//             cout<<str.substr(start+1,len)<<endl;
//             start=i;
//         }
//     }

//-------------------------------------------------------

string str = "Geek I24 ljadnf L43 JKBJNF K23";
regex regexE("[0-9]");                       //******************
 
smatch matched;                                       //******************

while(regex_search(str,matched,regexE)){                //******************
        cout<<matched.str()<<endl;                       //******************
        str = matched.suffix();                         //******************
} 

//-----------------------------------------------------------
//     vector<string>string_list{"act","god","cat","dog","tac"},s;
//     vector<pair<string,int>> str;
//     vector<vector<string>> ans;
//     int i=0;
//     for(auto s:string_list){
        
//         string st = s;
//         sort(st.begin(),st.end());
//         str.push_back(make_pair(st,i));
//         i++;
// }
// sort(str.begin(),str.end());
//     s.push_back(string_list.at(str.at(0).second));
//     for(int i=1;i<str.size();i++){
//         if(str.at(i-1).first == str.at(i).first){
//             s.push_back(string_list.at(str.at(i).second));
//         }else{
//             ans.push_back(s);
//             s.clear();
//         }
//     }


//------------------------------------------------

// string str = "czjisa" ,patt = "zouhf";
//   for(int i=0;i<str.size();i++){
// 	        if(patt.find(str[i]) != -1)
// 	           cout<< str[i];
// 	    }
// 	cout<< "$";
// cout<<4%2;
//--------------------------------------------------------------------
// string str;
// getline(cin,str);
// vector<string>str1;
// int start=0;
// for(int i=0;i<str.length();i++)
//     if(str[i] == ' '){
//         str1.push_back(str.substr(start,i));
//         start=i+1;
//     }
//     str1.push_back(str.substr(start,str.length()));
//     for(auto i=str1.rbegin();i <= str1.rend();i++){
//         cout<<*i<<" ";
//     }

//------------------------------------------------------------------------

// vector---------------
// int a[] = {1,2,3};
//   cout << -0[a] << endl ; 
//   return 0;

//----------------------------

//   char str1[]= "Geeks for Geeks";
//   cout << sizeof(str1) << "  " << strlen(str1) << endl ; 
//   return 0;

}