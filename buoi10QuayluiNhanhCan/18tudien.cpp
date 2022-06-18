#include<bits/stdc++.h>
using namespace std;

char a[100][100];
int k, n,m;
bool visited[100][100];
string s;
vector<string> res;
set<string> dict;

int dx[8] = {-1, -1,-1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1};
void inp()
{
	cin >> k >> n >> m;
	for(int i = 0; i < k; ++i)
	{
		string word;
		cin >> word;
		dict.insert(word);
	}
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			cin >> a[i][j];
		}
	}
}
void test(int i, int j)
{
	if(dict.count(s)) res.push_back(s);
	for(int k = 0; k < 8; ++k)
	{
		int i1 = i + dx[k];
		int  j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && visited[i1][j1] == 0)
		{
			s += a[i1][j1];
			visited[i1][j1] = 1;
			test(i1,j1);
			visited[i1][j1] = 0;
			s.pop_back();
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		inp();
		for(int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= m; ++j)
			{
				s = "" + a[i][j];
				test(i,j);
			}
		}
		sort(res.begin(), res.end());
		for(string x : res)
		{
			cout <<	x << " ";
		}
	}
	return 0;
}
