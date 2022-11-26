#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int seek(int a[], int n, int x)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == x) return 1;
		else if(a[m] > x)
		{
			r = m - 1;	
		}
		else l = m + 1;
	}
	return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0;i < n; ++i) cin >> a[i];
    if(seek(a, n, x)) cout << "YES\n";
    else cout <<"NO\n";
    return 0;
}

