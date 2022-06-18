#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, k, sum;
    cin >> t >> k;
    ll a[t + 5];
    for(int i = 1; i <= t; ++i)
    {
    	cin >> a[i];
	}
	queue<int> q;
	if(a[1] < k)
	{
		sum = a[1];
		a[1] = 0;
	}
	else
	{
		sum = k;
		a[1] -= k;
	}
	q.push(a[1]);
	for(int i = 2; i <= t; ++i)
	{
		int tmp = k;
		q.push(a[i]);
		if(q.front() >= k)
		{
			sum += k;
		}
		else
		{
			tmp -= q.front();
			if(q.back() >= tmp)
			{
				sum += tmp;
			}
			else
			{
				sum += q.back() + q.front();
				q.back() = 0;
			}
			q.pop();
		}
		if(q.size() > 1)
		{
			q.pop();
		}		
	}
	if(q.size() == 1)
	{
		if(q.front() >= k)
		{
			sum += k;
		}
		else sum += q.front();
	}
	cout << sum;
	return 0;
}

