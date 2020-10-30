#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str="asdfghjk";
	int k=7;
	if(k>str.length()) {cout<<"impossible"; return 0;}
	set<char> s;
	for(char c:str) s.insert(c);
	if(k>=s.size()) cout<<0;
	else 
	cout<<k-s.size();
}





