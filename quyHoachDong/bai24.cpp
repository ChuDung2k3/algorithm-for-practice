#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
//F[i] = min(F[i], F[i - j * j] + 1);
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int f[1000005];
    for(int i = 0; i <= 1e4; ++i)
    	f[i] = i;
    for(int i = 1; i <= 1e4; ++i)
    	for(int j = 1; j <= sqrt(i); ++j)
    		f[i] = min(f[i], f[i - j * j] + 1); 
    
    int n; cin >> n;
    cout << f[n] <<'\n';
    return 0;
}

