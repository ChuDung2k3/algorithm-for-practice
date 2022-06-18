#include<bits/stdc++.h>

using namespace std;

int n, x[100];
vector<vector<int>> res;
void test(int sum, int i, int val)
{
	if(sum == n)
	{
		vector<int> tmp(x + 1, x + i);
		res.push_back(tmp);
		return;
	}
	for(int j = val; j >= 1; --j)
	{
		if(sum + j <= n)
		{
			x[i] = j;
			test(sum + j, i + 1, j);
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		res.clear();
		test(0, 1, n);
		for(auto it : res)
		{
			cout << "(";
			for(int i = 0; i < it.size(); ++i)
			{
				cout << it[i];
				if(i != it.size() - 1) cout << " ";
				else cout << ") ";
			}
		}
		cout << endl;
	}
}
