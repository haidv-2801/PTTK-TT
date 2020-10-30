#include<bits/stdc++.h>
using namespace std;
struct node {
	struct node *childNode[26];
	bool endOfWord;
	int fre;
	
	node() {
		fre = 0;
		endOfWord = false;
		for(int i=0; i<26; i++)
			this->childNode[i] = 0;
	}	
};

void add(node *root, string key) {
	node *curr_node = root;
	for(int i=0; i<key.length(); i++) {
		int id = key[i] - 'a';
		if(!curr_node->childNode[id])
			curr_node->childNode[id] = new node();
		else 
			curr_node->fre += 1;
		curr_node = curr_node->childNode[id];
	}
	curr_node->endOfWord = true;
}

int getFre(node *root, string can) {
	node *curr = root;
	for(int i=0; i<can.length(); i++) {
		curr = curr->childNode[int(can[i]-'a')];
	}
	return curr->fre;
}

int main()
{
	int n;
	node *root = new node();
	cin >> n;
	while(n--) {
		string p, q;
		cin >> p >> q;
		if(p=="add")
			add(root, q);
		else 
			cout << getFre(root, q) << endl;
	}
}





