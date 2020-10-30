#include<bits/stdc++.h>
using namespace std;
int main()
{

	int arr[]={INT_MAX,2, 5, -1, 7, -3, -1, -2}, k = 4, n=sizeof(arr)/sizeof(int);
	//		   0  1   2  3   4   5   6
	deque<int> dqMx;
	for(int i=1; i<=n-1; i++) {
		while(!dqMx.empty() and arr[i]>=arr[dqMx.back()])  dqMx.pop_back();
		dqMx.push_back(i);
		if(i>=k) {
			if(i-dqMx.front()>=k) dqMx.pop_front();
			cout << arr[dqMx.front()] <<" ";
		}
	}
}






