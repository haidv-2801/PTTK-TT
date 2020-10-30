#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int a[1000]={}, b[k+5];
	
	for(int i=1; i<=k; i++) {
		cin >> b[i];
		a[b[i]]++;
	}
	
	if(k==1) {
		cout << b[1];
		return 0;		
	}
	
	for(int i=3; i<=n; i+=2) {
		if(a[i-1] != 0) {
			cout << i << " ";
		}
	}
	
	if(a[k]%2==0) {
		cout << b[k];
	}
}




