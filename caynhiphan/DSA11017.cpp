#include<bits/stdc++.h>

using namespace std;

struct Node
{
	int val;
	Node *left, *right;
	Node(int x)
	{
		val = x;
		left = right = NULL;
	}
};
Node* build(int *pre, int n)
{
	if(n <= 0) return NULL;
	Node *root = new Node(pre[0]);
	int idx = 1;
	for(int i = 1; i < n; ++i)
	{
		if(pre[i] > pre[0]) 
		{
			idx = i;
			break;
		}
	}
	root->left = build(&pre[1], idx - 1);
	root->right = build(&pre[idx], n - idx);
	return root;
}
void postOrder(Node *root)
{
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->val << " ";
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int pre[n];
		for(int i = 0; i < n; ++i) cin >> pre[i];
		Node *root = build(pre, n);
		postOrder(root);
		cout << endl;
	}
	return 0;
}
