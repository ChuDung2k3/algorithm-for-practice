#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int n;
double pre[1000000];
void init()
{
	cin >> n;
	int a[n + 1] = {0}, b[n + 1] = {0};
	for(int i = 1; i <= n; ++i)
	{
		cin >> a[i] >> b[i];
//		float x, y;
//		cin >> x >> y;
	pre[i] = pre[i - 1] + sqrt(pow(a[i] - a[i - 1], 2) + pow(b[i] - b[i - 1], 2));
//		cout << pre[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	init();
	int t; cin >> t;
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		cout <<fixed << setprecision(3) <<pre[b] - pre[a] <<'\n';
	}
	return 0;
}

