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

Node *build(int pre[], int *idx, int l, int r, int n)
{
	if (*idx >= n || l > r) return NULL;
	Node *root = new Node(pre[*idx]);
	(*idx)++;
	if (l == r) return root;
	int ans = r + 1;
	for(int i = l; i <= r; ++i)
	{
		if(pre[i] > root->val)
		{
			ans = i;
			break;
		}
	}
	root->left = build(pre, idx, *idx, ans - 1, n);
	root->right = build(pre, idx, ans, r, n);
	return root;
}
void postOrder(Node *root)
{
	if (root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->val <<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int pre[n];
    for(int i = 0; i < n ;++i) cin >> pre[i];
    int idx = 0;
    Node *root = build(pre, &idx, 0, n - 1, n);
    postOrder(root);
    cout << '\n';
}

