#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={2,2,4,4,7,7,7}, b[]={1,3,4,5,5};
	map<int,int> M;
	for(int x:a) ++M[x];
	int d=INT_MAX,z=INT_MIN;
	for(auto m:M)
	{
		if(m.second<=d)
		{
			d=m.second;
			z=m.first;
		}
	}
	cout<<z;
}





