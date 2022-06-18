#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void ql(string s, int l, int r, int n)
{
	if(l == n && r == n)
	{
		cout << s << '\n';
		return;
	}
	if(l < n) ql(s + '(', l + 1, r, n);
	if(r < l) ql(s +')', l, r + 1, n);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ql("", 0, 0, n);
    return 0;
}

