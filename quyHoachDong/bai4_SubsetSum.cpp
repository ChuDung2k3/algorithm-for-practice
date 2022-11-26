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
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; ++i)
   		cin >> a[i];
   	bool dp[s + 1] = {false};
   	dp[0] = true;
   	for(int i = 0; i < n; ++i)
   	{
   		for(int j = s; j >= a[i]; --j)
			{
		   		if(dp[j - a[i]]) dp[j] = true;
			}
	}
	if(dp[s]) cout <<"1\n";
	else cout << "0\n";
	return 0;
}

