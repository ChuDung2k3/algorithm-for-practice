#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

vi adj[1001];
bool used[1001];
int in[1001];

bool kahn(int n, int m)
{
	queue<int> q;
	for(int i = 1; i <= n; ++i)
	{
		if(in[i] == 0) q.push(i);
	}
	int cnt = 0;
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		++cnt;
		for(int x : adj[tmp])
		{
			--in[x];
			if(in[x] == 0)
			{
				q.push(x);
			}
		}
	}
	return cnt != n;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
    	int x, y;
    	cin >> x >> y;
    	adj[x].pb(y);
    	++in[y];
	}
	if(kahn(n, m)) cout << "1\n";
	else cout << "0\n";
	return 0;
}

