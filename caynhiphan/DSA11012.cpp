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
void makeNode(Node *root, int u, int v, char c)
{
	if(c =='L') root->left = new Node(v);
	else root->right = new Node(v);
}
void insert(Node *root, int u, int v, char c)
{
	if(root == NULL) return;
	if(root->val == u)
	{
		makeNode(root, u, v, c);
	}
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}
bool dup(Node *root1, Node *root2)
{
	if(root1 == NULL && root2 == NULL) return true;
	if(root1 != NULL && root2 != NULL )
		return (root1->val == root2->val)&& dup(root1->left, root2->left) && dup(root1->right, root2->right);
	return false;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		Node *root = NULL;
		while(n--)
		{
			int u, v; char c;
			cin >>u >> v>> c;
			if(root == NULL)
			{
				root = new Node(u);
				makeNode(root, u, v, c);
			}
			else insert(root, u, v, c);
		}
		cin >> n;
		Node *root2 = NULL;
		while(n--)
		{
			int u, v; char c;
			cin >> u>> v>> c;
			if(root2 == NULL)
			{
				root2 = new Node(u);
				makeNode(root2, u, v, c);
			}
			else insert(root2, u, v, c);
		}
		cout << dup(root, root2) << endl;
	}
	return 0;
}
