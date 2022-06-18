#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, m, k;
ll s[1000001], e[1000001], cnt;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    for(int i = 0; i < n; ++i)
    {
    	int x, y;
    	cin >> x >> y;
    	s[x]++; e[y]++;
	}
	ll res = 0;
	for(int i = 0; i <= m; ++i)
	{
		if(s[i])
		{
			cnt += s[i];
		} 
			
		if(e[i])
		{
			cnt -= e[i];
		} 
		if(cnt >= k) ++res;
	}
	cout << res << '\n';
	return 0;
}
