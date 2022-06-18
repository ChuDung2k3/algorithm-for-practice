#include<bits/stdc++.h>

using namespace std;

int n, k, a[1001], ans, s;
bool visited[1001];

void test(int sum, int cnt)
{
	if(cnt == k)
	{
		ans = 1; return;
	}
	if(ans) return;
	for(int j = 1; j <= n; ++j)
	{
		if(!visited[j])
		{
			visited[j] = true;
			if(sum == s) 
			{
				test(0, cnt + 1);
			}
			else if(sum + a[j] <= s)
			{
				test(sum + a[j], cnt);
			}
		}
		visited[j] = false;
	}
}
int main()
{
	int t = 1;
	while(t--)
	{
		ans = 0;
		s = 0;
		memset(visited, false, sizeof(visited));
		cin >> n >> k;
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
			s += a[i];
		}
		if(s%k) cout <<"0\n";
		else 
		{
			s/= k;
			test(0,0);
			cout << ans << endl;
		}
	}
	return 0;
}
