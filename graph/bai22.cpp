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

vi adj[1001];
bool used[1001];
int degree[1001];

bool kahn(int n, int m)
{
	queue<int>q;
	for(int i = 1; i <= n; ++i)
	{
		if(degree[i] == 0) q.push(i);
	}
	int cnt = 0;
	while(!q.empty())
	{
		int tmp = q.front();
		q.pop();
		++cnt;
		for(int x : adj[tmp])
		{
			--degree[x];
			if(degree[x] == 0)
			{
				q.push(x);
			}
		}
	}
	return cnt != n;
}
int main()
{
	int n, m;
	cin >>n >> m;
	for(int i = 1; i <= m; ++i)
	{
		int x, y;
		cin >> x>> y;
		adj[x].pb(y);
		++degree[y];
	}
	if(kahn(n, m)) cout <<"1\n";
	else cout << "0\n";
	return 0;
}
