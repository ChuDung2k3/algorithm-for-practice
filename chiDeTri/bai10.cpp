#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int find(int a[], int l, int r)
{
	int ans = -1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == 0)
		{
			ans = m;
			l = m + 1;
		}
		else r = m - 1;
	}
	return ans;
}
void solve()
{
	int n;
	cin >> n;
	int a[n];
	int cnt = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int ans = find(a, 0, n - 1);
	cout << ans + 1 <<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

