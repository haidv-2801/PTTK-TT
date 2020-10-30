#include<bits/stdc++.h>
using namespace std;
int main()
{
	string contacts[]={"Codelearn", "Codewar"}, names[]={"Code", "Codel", "io"};
	unordered_map<string,int> M;
	for(string s:contacts) while(s.size()) ++M[s],s.pop_back();
	for(string s:names) cout<<M[s]<<" ";
}





