#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, k, sum = 0;
int a[100], pre[100];
int res = 0;

void ql(int pos, int cnt)
{
	if(cnt == k && pre[cnt - 1] == sum && pos - 1 == n)
	{
		++res;
		return;
	}
	for(int j = pos; j <= n; ++j)
	{
		pre[cnt] += a[j];
		if(pre[cnt] == sum)
		{
			ql(j + 1, cnt + 1);
			for(int l = cnt + 1; l <= k; ++l)
			{
				pre[l] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
    	cin >> a[i];
    	sum += a[i];
	}
	if(sum % k != 0) cout << 0;
	else
	{
		sum /= k;
		ql(1, 0);
		cout << res<< '\n';
	}
	return 0;
}

