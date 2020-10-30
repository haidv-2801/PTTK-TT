#include<bits/stdc++.h>
using namespace std;
int main()
{
	string A[]={"Banana", "Banana", "Apple"}, B[]={"Orange", "Apple", "Banana", "Watermelon"};
	string r[]={"false","true"};
	unordered_map<string,bool> M;
	for(string s:A) M[s]=true;
	for(string s:B) cout<<r[!M[s]]<<" ";
}





