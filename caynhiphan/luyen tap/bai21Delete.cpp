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
    else if (root->data > x) root->left = insert(root->left, x);
    else root->right = insert(root->right, x);
    return root;
}
node *left(node *root)
{
    while(root->left != NULL)
    {
        root= root->left;
    }
    return root;
}

node *del(node *root, int x)
{
    if (root == NULL) return root;
    if (x < root->data) root->left = del(root->left, x);
    else if(root->data < x) root->right = del(root->right, x);
    else
    {
        if (root->left == NULL && root->right == NULL) return NULL;
        
        else if (root->left ==NULL)
        {
            node*tmp = root->right;
            delete root;
            return tmp;
        }
        else if(root->right == NULL)
        {
            node *tmp = root->left;
            delete root;
            return tmp;
        }
        node *tmp = left(root->right);
        root->data = tmp->data;
        root->right = del(root->right, root->data);
    }
    return root;
}

void inOrder(node *root)
{
    if (root == NULL) return;
    inOrder(root->left);
    cout << root->data <<" ";
    inOrder(root->right);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    node *root = NULL;
    for(int i = 0; i < n ;++i)
    {
        int x; cin >> x;
        root = insert(root, x);
    }
    int x; cin >> x;
    root = del(root, x);
    inOrder(root);
    return 0;
}

