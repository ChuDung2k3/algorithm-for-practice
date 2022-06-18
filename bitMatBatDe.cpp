#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int cnt = 1;
	queue<int> q;
	for(int i = 1; i <= n; ++i)
	{
		q.push(i);
	}
	while(q.size() > 1)
	{
		for(int i = 1; i < k; ++i)
		{
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}
	cout << q.front();
	return 0;
}

