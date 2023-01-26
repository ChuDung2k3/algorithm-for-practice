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
	if (root== NULL) return new node(x);
	if (root->data < x) root->right = insert(root->right, x);
	else root->left = insert(root->left, x);
	return root;
}

bool search(node *root, int x)
{
	if(root == NULL) return false;
	if(root->data > x) return search(root->left, x);
	else if (root->data < x) return search(root->right, x); 
	else return true;
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
	int x; cin >> x;
	if (search(root, x)) cout <<"YES";
	else cout <<"NO\n";
	return 0;
}

