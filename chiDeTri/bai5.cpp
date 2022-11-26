#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

ll a[100], n;
void inp(){
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> a[i];
	ll res = -1e9;
	ll sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += a[i];
		res = max(res, sum);
		if(sum < 0) sum = 0;
	}
	cout << res << '\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    inp();
}

