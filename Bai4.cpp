#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
int main()
{
	int k = 0;
	string s;
	queue<char> Q;
	stack<char> S;
	cin >> s;
	for(char c : s)
	{
		Q.push(c);
		S.push(c);
	}
	while(Q.size())
	{
		if(Q.front() != S.top())
		{
			k = 1;
			break;
		}
		Q.pop();
		S.pop();
	}
	if(k == 1) cout << "Not Palindrome";
	else cout << "Is Palindrome";
}





