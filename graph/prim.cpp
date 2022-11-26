#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int maxn = 100001;
struct canh{
    int x, y, w;
};
int n,m;
vector<pair<int, int>> adj[maxn];
bool used[maxn];
int par[maxn], d[maxn];
int tmp = 0;
void nhap()
{
    cin >> n >> m;
    for(int i = 0; i < m; ++i)
    {
        int x, y, w; cin >> x >> y >> w;
        tmp = x;
        adj[x].pb({y, w});
        adj[y].pb({x, w});
    }
}
void prim(int u)
{
    priority_queue<pair<int, int>, vector<pi>, greater<pair<int, int>>>Q;
    vector<canh>MST;
    ll res = 0,cnt = 0;
    Q.push({0, u});
    while(!Q.empty())
    {
        pair<int, int> top = Q.top(); Q.pop();
        int dinh = top.se, trongso = top.fi;
        if(used[dinh]) continue;

        used[dinh] = true;
        if(u != dinh)
        {
        	res += trongso;
        	++cnt;
        	MST.pb({dinh, par[dinh], trongso});
		}
        for(auto it : adj[dinh])
        {
            int y = it.fi, w = it.se;
            if(!used[y])
            {
                Q.push({w, y});
                par[y] = dinh;
            }
        }
    }
    if(cnt == n -1 ) cout << res << '\n';
    else cout <<"IMPOSSIBLE\n";
	for(auto it : MST)
	{
		cout << it.x << " " << it.y << " " << it.w <<'\n';
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    nhap();
    prim(1);
    return 0;
}

