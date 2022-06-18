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
vi res;
void bfs()
{
	queue<int> q;
	for(int i = 1; i < 6; ++i) q.push(i);
	while(1)
	{
		int t = q.front();
		res.pb(t);
		if(t > 100000) break;
		q.pop();
		int used[6] = {0};
		int tmp = t;
		while(t)
		{
			used[t%10] = 1;
			t/= 10;
		}
		for(int i = 0; i < 6; ++i)
		{
			if(!used[i])
			{
				q.push(tmp*10 + i);
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	bfs();
	while(t--)
	{
		int l, r;
		cin >> l >> r;
		int cnt = 0;
		for(int x : res)
		{
			if(x >= l && x <= r) 
			{
			++cnt;
			//	cout << x<< " ";
			}
		}
		cout << cnt << endl;
	}
}
