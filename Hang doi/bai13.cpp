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

int bfs(int n)
{
	queue<pi> q;
	q.push({n, 0});
	unordered_map<int, int> se;
	se[n] = 1;
	while(!q.empty())
	{
		pi tmp = q.front();
		q.pop();
		if(tmp.fi == 1)
		{
			return tmp.se;
		}
		for(int i = 2; i <= sqrt(tmp.fi); ++i)
		{
			if(tmp.fi % i == 0)
			{
				int m = max(i, tmp.fi/i); 
				if(se[m] == 0)
				{
					q.push({m, tmp.se + 1});
					se[m] = 1;
				}
			}
		}
		if(se[tmp.fi - 1] == 0)
		{
			q.push({tmp.fi - 1, tmp.se + 1});
			se[tmp.fi - 1] = 1;
		}
	}
	return 0;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << bfs(n) << endl;
	}
	return 0;
}
