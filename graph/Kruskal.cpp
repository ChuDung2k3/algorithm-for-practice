#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

struct canh
{
	int x, y, w;	
};
const int maxn = 1001;
int sz[maxn], parent[maxn], n, m;
vi adj[maxn];
vector<canh> dscanh;

int find(int u)
{
	if(u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

bool Union(int u, int v)
{
	u = find(u);
	v = find(v);
	if(u == v) return false;
	if(sz[u] < sz[v]) swap(u, v);
	sz[u] += sz[v];
	parent[v] = u;
	return true;
}
void nhap()
{
	cin >> n >> m;
	for(int i = 1; i <= m; ++i)
	{
		canh a;
		cin >> a.x >> a.y>> a.w;
		dscanh.pb(a);
	}
	for(int i = 1; i <= n; ++i)
	{
		sz[i]= 1;
		parent[i]= i;
	}
}
void kruskal()
{
	sort(begin(dscanh), end(dscanh), [](canh a, canh b) -> bool{
		return a.w < b.w;
	});
	int ans = 0;
	vector<canh> tree;
	for(int i = 0; i < m; ++i)
	{
		if(tree.size() == n - 1) break;
		if(Union(dscanh[i].x, dscanh[i].y))
		{
			tree.pb(dscanh[i]);
			ans += dscanh[i].w;
		}
	}
	if(tree.size() < n - 1)
	{
		cout << "Do thi khong lien thong \n";
	}
	else cout << "Do dai cay khung cuc tieu : " << ans << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    kruskal();
    return 0;
}

