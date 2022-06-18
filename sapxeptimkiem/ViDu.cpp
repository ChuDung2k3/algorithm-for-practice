#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
bool check(ll a[], int n, ll val, int k){
	int cnt = 0 ;
	ll sum = 0;
	FOR(i, 0, n){
		if(a[i] > val) return false;
		sum += a[i];
		if(sum > val){
			++cnt;
			sum = a[i];
		}
		if(cnt > k) return false;
	}
	++cnt;
	return cnt <= k;
}
 
 
int main(){
	int n, k; 
	cin >> n >> k;
	ll a[n];
	for(ll &x : a) cin >> x;
	ll left = 0;
	ll right = 1e18;
	ll res;
	while(left <= right){
		ll mid = (left + right) / 2;
		if(check(a, n , mid, k)){
			res = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	cout << res << endl;
	return 0;
}
