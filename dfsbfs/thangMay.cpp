#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m, k, s, f;

int bfs(int s, int f)
{
	set<int> Se;
	queue<pair<int, int>> q;
	q.push({s,0});
	while(!q.empty())
	{
		pi top = q.front(); q.pop();
		if(top.fi == f) return top.se;
		if(top.fi < f && !Se.count(top.fi + k))
		{
			q.push({top.fi + k, top.se + 1});
			Se.insert(top.fi + k);
		}
		if(top.fi > m && !Se.count(top.fi - m))
		{
			q.push({top.fi - m, top.se + 1});
			Se.insert(top.fi - m);
		}
	}
	return -1;
}
int main()
{
	cin >> n;
	cin >> k >> m >> s >> f;
	cout << bfs(s, f) << '\n';
	return 0;
}

