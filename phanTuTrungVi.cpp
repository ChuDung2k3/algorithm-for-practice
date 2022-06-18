#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
	priority_queue<int> min;
	priority_queue<int, vector<int>, greater<int>> max;
	int n; cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	if(a[0] > a[1])
	{
		max.push(a[0]);
		min.push(a[1]);
		cout << a[0] <<" " << a[1] << " ";
	}
	else
	{
		min.push(a[0]);
		max.push(a[1]);
		cout << a[0] << " " << a[0] << " ";
	}
	for(int i = 2; i < n; ++i)
	{
		if(a[i] > min.top())
		{
			max.push(a[i]);
		}
		else
		{
			min.push(a[i]);
		}
		if(max.size() > min.size())
		{
			int tmp = max.top();
			min.push(tmp);
			max.pop();
		}
		if(min.size() - max.size() > 1)
		// chu y dong if else nay!!
		{
			int tmp = min.top();
			max.push(tmp);
			min.pop();
		}
		cout << min.top() << " ";
	}
	return 0;
}

