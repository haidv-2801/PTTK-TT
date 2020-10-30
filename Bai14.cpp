#include<bits/stdc++.h>
#define ll long long
#define x first
#define y second
#define pii pair<int,int>
using namespace std;

int main()
{
	int k=3;
	pii d[]={{1,0},{2,1},{3,6},{-5,2},{1,-4}};
	int n=sizeof(d)/sizeof(pii);
	sort(d, d+n, [](pii a, pii b){
		return (a.x*a.x+a.y*a.y)<(b.x*b.x+b.y*b.y);
	});
	for(int i=0; i<k&&i<n; i++) printf("(%d, %d)\n",d[i].x,d[i].y);
}






