#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n, a[101], d1[101], d2[101], cnt;

void ql(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(a[j] && d1[i - j + n] && d2[i + j - 1])
		{
			a[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			if(i == n) ++cnt;
			else ql(i + 1);
			a[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}
int main()
{
	for(int i = 1; i < 101; ++i)
	{
		d1[i] = d2[i] = a[i] = 1;
	}
	cin >> n;
	cout << cnt << endl;
}
