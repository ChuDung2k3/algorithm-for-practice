#include<bits/stdc++.h>

using namespace std;

int s, p ,n, cnt = 0, x[100];
vector<int > nto;
vector<vector<int>> res;
int nt(int x)
{
	for(int i = 2; i <= sqrt(x); ++i)
	{
		if(x%i == 0) return 0;
	}
	return x > 1; 
}
void test(int i, int pos, int sum)
{
	if(i == n && sum == s)// xet khi i = 2 thi sum dang tinh i = 1 !@!!!;
	{
		vector<int> tmp(x, x + n);
		res.push_back(tmp);
	}
	for(int j = pos; j < nto.size(); ++j)
	{
		if(sum + nto[j] <= s)
		{
			x[i] = nto[j];
			cout <<i << endl;
			test(i + 1, j + 1, sum + nto[j]);
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		nto.clear();
		res.clear();
		cin >> n >> p >> s;
		for(int i = p+ 1; i <= s; ++i)
		{
			if(nt(i))
			{
				nto.push_back(i);
			}
		}
		test(0, 0, 0);
		cout << res.size() << endl;
		for(auto it : res)
		{
			for(auto x : it)
			{
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
