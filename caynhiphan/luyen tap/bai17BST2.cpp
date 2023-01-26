#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

struct node{
	int data;
	node *left, *right;
	node(int x)
	{
		data = x;
		left = right = NULL;
	}
};

node *insert(node *root, int x)
{
	if (root == NULL) return new node(x);
	if (root->data > x) root->left = insert(root->left, x);
	else root->right = insert(root->right, x);
	return root;
}

void preOrder(node *root)
{
	if (root == NULL) return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
	node *root = NULL;
	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		root = insert(root, x);
	}
	preOrder(root);
}

