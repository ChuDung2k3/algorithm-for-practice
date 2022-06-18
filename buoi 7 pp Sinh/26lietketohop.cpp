#include<bits/stdc++.h>

using namespace std;

int n, k,ok, a[1000];
set<int> se;
void ktao()
{
	for(int i = 1; i <= k;++i)
	{
		a[i] = i;
	}
}
void next()
{
	int i = k;
	while(i >= 1 && a[i] == n - k + i) --i;
	if(i == 0) ok = 0;
	else
	{
		++a[i];
		for(int j = i + 1; j <= k; ++j)
		{
			a[j] = a[j - 1] + 1;
		}
	}
}
int main()
{
	int x;
	cin >> x >> k;
	for(int i = 0; i < x; ++i)
	{
		int tmp;cin >> tmp;
		se.insert(tmp);
	}
	n = se.size();
	vector<int>v;
	for(int x: se)
	{
		v.push_back(x);
	}
	ok = 1;
	ktao();
	while(ok)
	{
		for(int i = 1; i <= k; ++i)
		{
			cout << v[a[i] - 1] << " ";
		}
		cout << endl;
		next();
	}
	return 0;
}
