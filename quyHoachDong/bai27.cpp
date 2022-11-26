#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int max_digit(int n)
{
	int res = 0;
	while(n)
	{
		res = max(res, n % 10);
		n /= 10;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
	cin >> n;
    int f[n + 1];
    f[n] = 0;
    while(n != 0)
    {
    	int tmp = n - max_digit(n);
    	f[tmp] = f[n] + 1;
    	n = tmp;
	}
	cout << f[0] << '\n';
	return 0;
}

