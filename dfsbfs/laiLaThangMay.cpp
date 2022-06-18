#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, k, f, s;
int a[101];
int bfs(int s, int f)
{
	set<int> Se;
	queue<pair<int, int>> q;
	q.push({s, 0});
	while(!q.empty())
	{
		pi top = q.front(); q.pop();
		if(top.fi == f) return top.se;
		for(int i = 0; i < k; ++i)
		{
			if(top.fi + a[i] > 0 && top.fi + a[i] <= n &&!Se.count(top.fi + a[i]))
			{
				q.push({top.fi + a[i], top.se + 1});
				Se.insert(top.fi + a[i]);
			}
		}
	}
	return -1;
}
int main()
{
	cin >> n >> k;
	for(int i = 0; i < k; ++i)
	{
		cin >> a[i];
	}
	cin >> s >> f;
	cout << bfs(s, f) << endl;
	return 0;
}

