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
    map<int, int> mp;
    mp[0] = 1;
    int chan = 0, le = 0, ans = 0;
    for(int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if(x % 2) le ++;
    	else chan++;
    	if(mp.find(chan - le) != mp.end())
    	{
    		ans += mp[chan - le];
		}
		mp[chan - le]++;
	}
	cout << ans;
	return 0;
}

