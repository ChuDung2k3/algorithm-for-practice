#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
#define mp make_pair
using namespace std;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int si, sj, ti, tj;
int path[9][9];
bool used[9][9];
int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
void bfs(int u, int v)
{
	path[u][v] = 0;
	queue<pi> q;
	q.push({u, v});
	used[u][v] = true;
	while(!q.empty())
	{
		pi tmp = q.front(); q.pop();
		int u = tmp.fi, v = tmp.se;
		for(int k = 0; k < 8; ++k)
		{
			int i1 = u + dx[k];
			int j1 = v + dy[k];
			if(i1 >= 1 && i1 <= 8 && j1 >= 1 && j1 <= 8 && !used[i1][j1])
			{
				path[i1][j1] = path[u][v] + 1;
				used[i1][j1] = true;
				q.push({i1, j1});
			}
		}
	}
	
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		sj = (int)(s[0] - 'a' + 1);
		si = (int)(s[1] - '0');
		string t; cin >> t;
		tj = (int)(t[0] - 'a' + 1);
		ti = (int)(t[1] - '0');
		ms(used, false);
		ms(path, 0);
		bfs(si, sj);
		cout << path[ti][tj] << endl;
	}
	return 0;
}
