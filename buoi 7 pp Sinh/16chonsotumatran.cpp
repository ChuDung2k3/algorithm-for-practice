#include<bits/stdc++.h>

using namespace std;

int n, k, a[1005],ok;
int mt[100][100];

void ktao()
{
	for(int i = 1; i <= n; ++i)
	{
		a[i] = i;
	}
}
void sinh()
{
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]) --i;
	if(i == 0) ok = 0;
	else
	{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i], a[j]);
		sort(a + i + 1, a + n + 1);
	}
}
int main()
{
	cin >> n >> k;
	for(int i = 1; i<= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> mt[i][j];
		}
	}
	ktao();
	vector<vector<int>>v;
	ok = 1;
	while(ok)
	{
		int sum = 0;
		for(int i = 1; i<= n; ++i)
		{
			sum += mt[i][a[i]];
		}
		if(sum == k)
		{
			vector<int>tmp(a + 1, a + n + 1);
			v.push_back(tmp);
		}
		sinh();
	}
	cout << v.size() << endl;
	for(vector<int> it :v)
	{
		for(int x : it)
		{
			cout << x <<" ";
		}
		cout << endl;
	}
	return 0;
}

