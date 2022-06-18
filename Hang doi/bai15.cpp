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

bool prime[10001];
void seive()
{
	ms(prime, true);
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000); ++i)
	{
		if(prime[i])
		{
			for(int j = i*i; j <= 10000; j += i)
			{
				prime[j] = false;
			}
		}
	}
}
int bfs(int s, int t)
{
	queue<pi> q;
	q.push({s, 0});
	bool used[10001];
	ms(used, false);
	used[s] = true;
	while(!q.empty())
	{
		pi tmp = q.front();
		int num = tmp.fi;
		int x = num;
		q.pop();
		if(num == t) return tmp.se;
		vi digit;
		while(x)
		{
			digit.pb(x%10);
			x/= 10;
		}
		reverse(begin(digit), end(digit));
		for(int i = 0; i < 4; ++i)
		{
			for(int j = 0; j <= 9; ++j)
			{
				if( i == 0 && j == 0) continue;
				if(digit[i] != j)
				{
					int new_num = 0;
					for(int k = 0; k < 4; ++k)
					{
						if( i != k) new_num = new_num*10 + digit[k];
						else new_num = new_num*10 + j;
					}
					if(prime[new_num] && !used[new_num])
					{
						q.push({new_num, tmp.se + 1});
						used[new_num] = true;
					}
				}
			}
		}
	}
	return -1;
}
int main()
{
	seive();
	int t; cin >> t;
	while(t--)
	{
		int s, t;
		cin >> s >> t;
		cout << bfs(s, t) << endl;
	}
	return 0;
}
