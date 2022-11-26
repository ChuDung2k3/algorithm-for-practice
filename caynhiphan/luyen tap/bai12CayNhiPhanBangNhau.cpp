#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
struct Node{
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
	if (c == 'L') root->left = new Node(v);
	else root->right = new Node(v);
}
void insert(Node *root, int u, int v, char c)
{
	if (root == NULL) return;
	if (root->val == u) makeNode(root, u, v, c);
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}

bool identical(Node *root1, Node *root2)
{
	if (root1 == NULL && root2 == NULL)
	{
		return true;	
	}
	if (root1 != NULL && root2 != NULL)
	{
		return (root1->val == root2->val) && (identical(root1->left, root2->left)) && identical(root1->right, root2->right);
	}
	return false;
}
int main()
{
	int u, v; char c;
	int n; cin >> n;
	Node *root1 = NULL;
	while(n--)
	{
		int u,  v; char c;
		cin >> u >> v >> c;
		if (root1 == NULL)
		{
			root1 = new Node(u);
			makeNode(root1, u, v, c);
			
		}
		else insert(root1, u, v, c);
	}
	int m; cin >> m;
	Node *root2 = NULL;
	while(m--)
	{
		int u, v; char c;
		cin >> u >> v >> c;
		if (root2 == NULL)
		{
			root2 = new Node(u);
			makeNode(root2, u, v, c);
		}
		else insert(root2, u, v, c);
	}
	if (identical(root1, root2)) cout << "YES\n";
	else cout << "NO\n";
}

