#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, x[100], used[101], dem = 0;

void ql(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(used[j] == 0 && abs(j - x[i - 1]) != 1)
		{
			x[i] = j;
			used[j] = 1;
			if(i == n)
			{
				++dem;
				for(int i = 1; i <= n; ++i)
				{
					cout << x[i];
				}
				cout << '\n';
			}
			else ql(i + 1);
			used[j] = 0;
		}
	}
}
int main()
{
	cin >> n;
	x[0] = -1;
	ql(1);
//	cout << dem << endl;
	return 0;
}
