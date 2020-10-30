#include<bits/stdc++.h>
#define ll long long
#define va first
#define fre second
#define pii pair<int,int>
using namespace std;
int main()
{
	int n = 3;
	pii A;
	queue<pii> Q({{1,1},{2,1},{3,1},{4,1},{5,1}});
	while(1)
	{
		pii t=Q.front(); Q.pop();
		if(n<t.fre){cout<<t.va;break;}
		else if(n==t.fre){cout<<Q.front().va;break;}
		else n-=t.fre;
		Q.push({t.va, t.fre*2});
	}
}






