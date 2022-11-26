#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

struct Node
{
	char c;
	Node *left, *right;
	Node(char x)
	{
		c = x;
		left = right = NULL;
	}
};
bool check(char x)
{
	return x == '+' || x == '-' || x == '*' || x =='/';
}
void inOrder(Node *root)
{
	if (root == NULL) return;
	inOrder(root->left);
	cout << root->c <<" ";
	inOrder(root->right);
}
void solve(string s)
{
	stack<Node*> st;
	Node *root;
	for (int i = 0; i < s.length(); ++i)
	{
		if(!check(s[i]))
		{
			st.push(new Node(s[i]));
		}
		else
		{
			Node *tmp = new Node(s[i]);
			Node *t1 = st.top(); st.pop();
			Node *t2 = st.top(); st.pop();
			tmp->left = t2; tmp->right = t1;
			st.push(tmp);
		}
	}
	
	root = st.top();
	inOrder(root);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
    	string s; cin >> s;
    	solve(s);
    	cout << '\n';
	}
	return 0;
}

