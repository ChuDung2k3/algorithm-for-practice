#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int maxn = 1001;
int parent[1001], sz[maxn];
int n, m;
int find(int u)
{
    if(u == parent[u]) return u;
    else return parent[u] = find(parent[u]);
}

bool Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(sz[a] > sz[b])
    {
        parent[b] = a;
        sz[b] += sz[a];
    }
    else
    {
        parent[a] = b;
        sz[a] += sz[b];
    }
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
    int ans = 0;
     for(int i = 1; i <= n; ++i)
     {
         if(i == parent[i])
         {
             ++ans;
         }
     }
     cout << ans << '\n';
     return 0;
}

