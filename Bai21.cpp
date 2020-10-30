#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1,4,5,6,3,3};
	int arr1[]={1,4,9,2,3,3};
	map<int,int> M;
	int ans=0;
	for(int value:arr) M[value]++;
	for(int value:arr1) if(M[value]) ans+=value,M[value]=0;
	cout << ans;
	
}





