#include <bits/stdc++.h>
using namespace std;

int main() {
	
	map<char,int>M;
	string str="geeksforgeeks";
	for(int i=0;i<str.length();i++) {
		M[str[i]]++;
	}
	for(int i=0;i<str.length();i++) {
		if(M[str[i]]>1)
			cout<<i<<endl;
	}
	
	
	return 0;
}