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

void makeNode(node *root, int a, int b, int c) // cha : c, con: b, (vi tri: c --> trai(0), phai(1));
{
	if (c == 0) root->left = new node(b);
	else root->right = new node(b);
}

void insert(node *root, int a, int b, int c)
{
	if (root == NULL) return;
	if (root->data == a)
	{
		makeNode(root, a, b, c);
	}
	insert(root->left, a, b, c);
	insert(root->right, a, b, c);
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
    int n; cin >> n; //Nhap canh cua canh
    node *root = NULL;
    while(n--)
    {
    	int a, b, c;
    	cin >> a >> b >> c;
    	if (root == NULL)
    	{
    		root = new node(a);
    		makeNode(root, a, b, c);
		}
		else insert(root, a, b, c);
	}
	preOrder(root);
	return 0;
}
//test mau:
//6
//1 2 0 1 3 1 2 4 0 2 5 1 3 6 0 3 7 1

