#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, x[100];
int c[100][100], cost = 1e9, res;
bool used[100];
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			cin >> c[i][j];
		}
	}
}

void Try(int i)
{
	for(int j = 2; j <= n; ++j)
	{
		if(!used[j])
		{
			used[j] = true;
			x[i] = j;
			res += c[j][x[i - 1]];
			if(i == n)
			{
				cost = min(cost, res + c[x[n]][1]);
			}
			else Try(i + 1);
			used[j] = false;
			res -= c[x[i]][x[i - 1]];
		}
	}
}
int main()
{
	inp();
	x[1] = 1;
	Try(2);
	cout << cost;
	return 0;
}
