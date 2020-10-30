#include<bits/stdc++.h>
using namespace std;
struct node {
	bool ed;
	node *child[10];
	node() {
		ed = false;
		for(int i=0; i<9; i++)
			child[i] = 0;
	}
	
};

bool canadd(node *root, string str) {
	for(char c:str) {
		if(!root->child[int(c-'0')])
			root->child[int(c-'0')] = new node();
		else {
			if(root->ed == true) 
				return false;
		}
		root = root->child[int(c-'0')];
	}
	if(root->ed == true) 
		return false;
	root->ed = true;
	return true;
}

void K() {
	node *root = new node();
	int n; cin >> n;
	string str;
	while(n--) {
		cin >> str;
		if(canadd(root, str) == false) {
			cout << "NO";
			return;
		}		
	}
	cout << "YES";
	cout << endl;
}

int main()
{
	int t; cin >> t;
	while(t--) K();
	
}





