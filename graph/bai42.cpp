#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long

using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 1000001;

int n, m;
int parent[maxn], sz[maxn];
int res = 0;
struct canh
{
	int u, v, w;
};

vector<canh>edge;

int find(int u)
{
	if(u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

int Union(int a, int b)
{
	a = find(a);
	b = find(b);
	if( a == b) return 0;
	if(sz[a] < sz[b]) swap(a, b);
	sz[a] += sz[b];
	res = max(res, sz[a]);
	parent[b] = a;
	return 1;
}

void nhap()
{
	cin >> n>> m;
	for(int i = 1; i <= n; ++i)
	{
		sz[i] = 1;
		parent[i] = i;
	}
	res = 1;
	int tplt = n;
	for(int i = 0; i < m; ++i)
	{
		int x, y;
		cin >> x >> y;
		tplt -= Union(x, y);
		cout << tplt << " " << res << endl;
	}
}
int main()
{
	nhap();
	return 0;
}
