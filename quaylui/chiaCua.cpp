#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n;
ll x[100], a[100], sum = 0, res = 0, cnt = 1e9;

void ql(int i)
{
	for(int j = 0; j <= 1; ++j)
	{
		x[i] = j;
		if(i == n)
		{
			sum = 0, res = 0;
			for(int k = 1; k <= i; ++k)
			{
				if(x[k] == 0)
				{
					sum += a[k];
				}
				else res += a[k];
			}
			cnt = min(abs(sum - res), cnt);
		}
		else ql(i + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
    	cin >> a[i];
	}
	ql(1);
	cout << cnt;
	return 0;
}

