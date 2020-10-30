#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
bool isPrime(int n)
{
	if(n<2) return false;
	for(int i=2;i*i<=n; i++) if(n%i==0) return false;
	return true;
}

bool superPrime(int k)
{
	int m=k;
	while(m) {if(!isPrime(m)) return false; m/=10;}
	return true;
}
int main()
{
	int n=30;
	for(int i=2; i<=n; i++) if(superPrime(i)) cout << i <<" ";
}






