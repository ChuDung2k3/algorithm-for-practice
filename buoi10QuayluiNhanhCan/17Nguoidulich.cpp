#include<bits/stdc++.h>

using namespace std;

int n, x[100], k, ok, res = 0, toiuu = 1e9;
int c[100][100], cmin = 1e9 + 5;
bool visited[1001];
void inp()
{
	memset(visited, false, sizeof(visited));
	cin >> n;
	for(int i = 1; i<= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> c[i][j];
			if(c[i][j]) cmin = min(cmin, c[i][j]);	
		}
	}
}
void test(int i)
{
	for(int j = 2; j <= n;++j)
	{
		if(!visited[j])
		{
			visited[j] = true;
			x[i] = j;
			res += c[x[i]][x[i - 1]];
			if( i == n) toiuu = min(toiuu, res + c[x[n]][1]);
			else if(res + cmin*(n - i + 1) < toiuu)
			{
				test(i + 1);
			}
			visited[j] = false;
			res -= c[x[i]][x[i - 1]];
		}
	}
}
int main()
{
		inp();
		x[1] = 1;
		test(2);
		cout << toiuu;
}
