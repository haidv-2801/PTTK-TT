#include<bits/stdc++.h>
using namespace std;
int main()
{
	string arr[]={"codelearn", "io", "programer", "programer", "codelearn"};
	int n=sizeof(arr)/sizeof(string);
	map<string,int> M;
	int ans=-1;
	for(int i=0; i<n; i++) 
	{
		if(!M[arr[i]]) M[arr[i]]=i+1;
		else ans=max(ans,i-M[arr[i]]+1);
	}
	cout << ans;
}





