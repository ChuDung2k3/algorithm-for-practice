#include<bits/stdc++.h>

using namespace std;

int a[100][100],n;
string s;
vector<string> res;

int dx[4] = {1, 0,0,-1};
int dy[4] = {0, -1, 1, 0 };
string path = "DLRU";
void test(int i, int j)
{
	if(i == n && j == n)
	{
		res.push_back(s);
	}
	for(int k = 0; k < 4;++k)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
		{
			s += path[k];
			a[i1][j1] = 0;
			test(i1, j1);
			s.pop_back();
			a[i1][j1] = 1;
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= n; ++j)
			
			{
			cin >> a[i][j];	
			}
		}
		test(1,1);
		for(string x : res)
		{
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
