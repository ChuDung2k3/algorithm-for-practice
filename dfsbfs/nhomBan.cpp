#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 1000001;
int parent[maxn], sz[maxn], cnt[maxn];
int n, m;
int find(int u)
{
	if( u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

bool Union(int a, int b)
{
	a = find(a);
	b = find(b);
	if(a == b) return false; // thuoc cung mot tap hop;
	if(sz[a] < sz[b]) swap(a, b);
	sz[a] += sz[b];
	parent[b] = a;
	return true;
}
void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		parent[i] = i;
		sz[i] = 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    ktao();
    for(int i = 0; i < m; ++i)
    {
    	int x, y;
    	cin >> x >> y;
    	Union(x, y);
	}
	int ans = 0, dem = 0;
	 for(int i = 1; i <= n; ++i)
	 {
	 	parent[i] = find(parent[i]);
	 	cnt[parent[i]]++;
	 	//cout <<parent[i] << " ";
	 	dem = max(dem, cnt[parent[i]]);
	 	if(i == parent[i])
	 	{
	 		++ans;
		 }
	 }
	 //cout << '\n';
	 cout <<ans <<'\n' <<dem << '\n';
	 return 0;
}
