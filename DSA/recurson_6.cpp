#include <iostream>
using namespace std;
string str2="def";

void printSub(string str, char curr, int i)
{
	if(i == str.length())
	{
		cout<<'"'<<curr<<'"'<<" ";
		return;
	}
	printSub(str,str[0],i + 1);
}
	
int main() {
	
	string str = "ABC";
    	
    printSub(str,' ', 0);
	
	return 0;
}