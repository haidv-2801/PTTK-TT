#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int> S;
	int ar[]={1,1,3,4,5};
	for(int a:ar) S.insert(a);
	if(S.size()==1) cout << "NO";
	else 
	{
		S.erase(S.begin());
		cout << *(S.begin());	
	} 
}





