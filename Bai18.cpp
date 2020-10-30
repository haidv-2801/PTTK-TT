#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s="aacccd";
	map<char,int> M;
	for(char c:s) ++M[c];
	for(auto t:M) cout << t.first << " " << t.second << endl;
}





