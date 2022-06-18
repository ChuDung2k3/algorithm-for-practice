#include<bits/stdc++.h>

using namespace std;

struct job
{
	int id, deadline, profit;	
};
bool cmp(job a, job b)
{
	return a.profit > b.profit;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		job a[n];
		for(int i = 0; i < n ;++i)
		{
			cin >> a[i].id >> a[i].deadline >> a[i].profit;
		}
		sort(a, a + n, cmp);
		bool used[n];
		int cnt = 0, sum = 0;
		memset(used, false, sizeof(used));
		for(int i = 0; i < n; ++i)
		{
			for(int j = a[i].deadline - 1; j >= 0; --j)
			{
				if(used[j] == false)
				{
					used[j] = true;
					++cnt;
					sum += a[i].profit;
					break;
				}
			}
		}
		cout << cnt << " " << sum << endl;
	}
	return 0;
}
