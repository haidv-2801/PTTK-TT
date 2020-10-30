#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={INT_MAX,2, 5, -1, 7, -3, -1, -2}, k = 4, n=sizeof(arr)/sizeof(int);
	//		   0  1   2  3   4   5   6
	int ans=0;
	deque<int> dqMx({0}), dqMn({0});
	for(int i=1; i<=n-1; i++) {
		while(!dqMx.empty() and arr[i]>=arr[dqMx.back()])  dqMx.pop_back();
		dqMx.push_back(i);
		while(!dqMn.empty() and arr[i]<=arr[dqMn.back()]) dqMn.pop_back();
		dqMn.push_back(i);
		if(i>=k) {
			if(i-dqMx.front()>=k) dqMx.pop_front();
			if(i-dqMn.front()>=k) dqMn.pop_front();
			ans+=arr[dqMn.front()]+arr[dqMx.front()];
		}
	}
	cout << ans;
}




