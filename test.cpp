#include<bits/stdc++.h>
using namespace std;
struct node {
	bool ed;
	vector<*node> child;
	node() {
		ed = false;
		child.resize(10, 0);
	}
};

bool canadd(node *root, string str) {
	for(char c:str) {
		if(!root->child[c-'0'])
			root->child[c-'0'] = new node();
		else {
			if(root->ed == true) 
				return false;
		}
		root = root->child[c-'0'];
	}
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





