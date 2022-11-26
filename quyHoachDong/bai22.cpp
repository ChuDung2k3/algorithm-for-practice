#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

//F[i] = F[i - 1] * 10 + (s[i] - '0') * i;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int n = s.size();
    ll ans = 0;
    ll f[n] = {0};
    f[0] = s[0] - '0';
    for(int i = 1; i < n; ++i)
    	f[i] = f[i - 1] * 10 + (s[i] - '0') *(i + 1);
    for(int i = 0; i < n; ++i) ans += f[i];
    cout << ans << '\n';
    return 0;
}

