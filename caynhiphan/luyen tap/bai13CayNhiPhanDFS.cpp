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

void insertNode(Node *root, int u, int v, char c)
{
	if (root == NULL) return;
	if (root->val == u) makeNode(root,u, v, c);
	insertNode(root->left, u, v, c);
	insertNode(root->right, u, v, c);
}

bool used[1001];
void dfs(Node *root)
{
	cout << root->val <<' ';
	used[root->val] = true;
	if (root->right != NULL) dfs(root->right);
	if (root->left != NULL) dfs(root->left);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    Node *root = NULL;
	while(n--)
    {
    	int u, v; char c;
    	cin >> u >> v >> c;
    	if (root == NULL)
    	{
    		root = new Node(u);
    		makeNode(root, u, v, c);
		}
		else insertNode(root, u, v, c);
	}
	dfs(root);
	
}

