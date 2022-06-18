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
	int i = 0;
	for(i = 1; i < n; ++i)
	{
		if(pre[i] > pre[0]) break;
	}
	root->left = build(&pre[1], i - 1);
	root->right = build(&pre[i], n - i);
	return root;
}
int count(Node *root)
{
	if(root == NULL || root->left == NULL && root->right == NULL) return 0;
	return 1 + count(root->left) + count(root->right);
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
		cout << count(root) << endl;
	}
	return 0;
}
