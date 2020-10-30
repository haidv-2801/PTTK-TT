#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  arr[]={2,4,-1,9,8},sum=6;
	int  arr1[]={2,5,3,8,9}, sum1=3;
	unordered_map<int,int> M;
	bool k=false;
	for(int x:arr1) ++M[x];
	for(int x:arr1) 
	if(M[sum1-x]) {k=true; break;}
	cout<<k;	
}





