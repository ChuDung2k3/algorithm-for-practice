#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int search(int in[], int x, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if(in[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void postOrder(int in[], int pre[], int n)
{
	int idx = search(in, pre[0], n);
	if (idx != 0)
	{
		postOrder(in, pre + 1, idx);
	}
	if (idx != n - 1)
	{
		postOrder(in + idx + 1, pre + idx + 1, n - idx - 1);
	}
	cout << pre[0] <<' ';
}
int main()
{

    int n; cin >> n;
    int in[n], pre[n];
    for (int i = 0; i < n; ++i) cin >> pre[i];
    for (int i = 0; i < n; ++i) cin >>in[i];
	postOrder(in ,pre, n);
	cout <<'\n';
	return 0; 
}

