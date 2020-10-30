#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
string optimize(string str)
{
	string res="";
	set<char> S;
	for(char c:str) S.insert(c);
	for(auto t:S) res+=t;
	return res;
}
int main()
{
	set<string> S; string words[] = {"a","aa","aaa","ab","bab"};
 	for(string str:words) S.insert(optimize(str));
 	cout << S.size();
}






