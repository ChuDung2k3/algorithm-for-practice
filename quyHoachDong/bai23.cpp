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
    string s; cin>> s;
    int n = s.size();
    s = "@" + s;
    bool f[n + 1][n + 1] = {0};
    for(int i = 1; i <= n; ++i) f[i][i] = true;
    int ans = 1;
    for(int k = 1; k <= n; ++k)
    {
    	for(int i = 1; i <= n - k; ++i)
    	{
    		int j = i + k;
    		if(k == 1 && s[i] == s[j]) f[i][j] = true;
    		else f[i][j] = f[i + 1][j - 1] && (s[i] == s[j]);
    		if(f[i][j]) ans = max(ans, j - i + 1);
		}
	}
	cout << ans << '\n';
	return 0;
}

