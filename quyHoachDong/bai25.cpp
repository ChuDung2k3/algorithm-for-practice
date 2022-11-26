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
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    s = "#" +  s, t = "#" + t;
    int f[n + 1][m+ 1] = {0};
    for(int i = 1; i <= n; ++i) f[i][0] = i;
    for(int i = 1; i <= m; ++i) f[0][i] = i;
    for(int i = 1; i <= n; ++i)
    	for(int j = 1; j <= m; ++j)
    		if(s[i] == t[j]) f[i][j] = f[i - 1][j - 1];
    		else f[i][j] = min({f[i - 1][j - 1], f[i - 1][j], f[i][j - 1]}) + 1;
    
    cout << f[n][m] << endl;
    return 0;
}

