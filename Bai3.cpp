#include<bits/stdc++.h>
using namespace std;
vector<int> find(int *arr, int n, int k)
{
	vector<int> res(2, -1);
	sort(arr, arr+n);
	int t=upper_bound(arr, arr+n)-arr; if(t<n) res[0]=arr[t];
	return res;
}
void print(vector<int> t){for(auto x:t) cout << t << " ";}
int main()
{
	int arr[] = {1, 2, 3, 4, 5},n=sizeof(arr)/sizeof(int) ,k = 4;
	vector<int> res=find(arr, n, k);
	print(res);
}





