#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
int main()
{
//	2 3 4 5 7 8 9
	int d[] = {4, 5, 7, 2, 4, 9, 7, 8, 4, 3};
	int t = sizeof(d) / sizeof(int), n;
	set<int> S;
	for(auto x : d) S.insert(x);
	cout << "Nhap N:";
	cin >> n;
	if(n > S.size() || n < 1) cout << "Khong co diem cao thu " << n;
	else 
	{
		auto p = S.begin();
		for(int i=1; i<=n; i++) p++;
		cout << "Diem cao thu " << n <<" la:" << *(--p);
	}
	
}





