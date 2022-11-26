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
	if (root->val == u)
	{
		makeNode(root, u, v, c);
	}
	insert(root->left, u, v, c);
	insert(root->right, u, v, c);
}
void preOrder(Node *root)
{
	if (root == NULL) return;
	cout << root->val <<' ';
	preOrder(root->left);
	preOrder(root->right);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *root = NULL;
    int t; cin >> t;
    while(t--)
    {
    	int u, v; char c;
    	cin >> u >> v >> c;
    	if (root == NULL)
    	{
    		root = new Node(u);
    		makeNode(root, u, v, c);
		}
		else insert(root, u, v, c);
	}
	preOrder(root);
}

