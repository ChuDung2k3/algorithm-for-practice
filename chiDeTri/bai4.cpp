#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

ll fibo[93];
void init(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 93; ++i)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
}

char solve(int n, ll i)
{
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(i <= fibo[n - 2]) return solve(n - 2, i);
	else return solve(n - 1, i - fibo[n - 2]);
}
int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    ll n, k; cin >> n >> k;
    cout << solve(n, k);
    return 0;
    
}

