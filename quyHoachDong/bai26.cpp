#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    vector<int> res;
    res.pb(a[0]);
    for(int i = 1; i < n; ++i)
    {
    	auto it = lower_bound(res.begin(), res.end(), a[i]);
    	if(it != res.end())
    	{
    		*it = a[i];
		}
		else res.pb(a[i]);
	}
	cout << res.size() << endl;
}

