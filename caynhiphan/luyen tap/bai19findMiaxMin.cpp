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
	if (root->data < x) root->right = insert(root->right, x);
	else root->left = insert(root->left, x);
	return root;
}
int findMax(node *root)
{
	if (root->right == NULL) return root->data;
	else return findMax(root->right);
}
int findMin(node*root)
{
	if(root->left == NULL) return root->data;
	else return findMin(root->left);
}
int maxi = INT_MIN, mini = INT_MAX;
void findMaxMin(node *root)
{
	if (root != NULL)
	{
		maxi = max(maxi, root->data);
		mini = min(mini, root->data);
		findMaxMin(root->left);
		findMaxMin(root->right);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    node *root= NULL;
    for(int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	root = insert(root, x);
	}
//	findMaxMin(root);
	cout <<findMax(root) << " " <<findMin(root);
	return 0;
}

