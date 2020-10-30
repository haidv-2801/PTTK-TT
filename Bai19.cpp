#include<bits/stdc++.h>
using namespace std;
int d[300];
bool ss(char a, char b) {return d[a]==d[b] ? b>a : d[b]<d[a];}
int main()
{
	string s;
	vector<char> listChars;
	cin >> s;
	for(char c:s) 
	{
		if(!d[c]) listChars.push_back(c);
		d[c]++;
	}
	sort(listChars.begin(), listChars.end(), ss);
	for(char c:listChars) cout << c;
}





