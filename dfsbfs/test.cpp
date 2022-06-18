#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
#define all(a) a.begin(),a.end()
#define ms(a,n) memset(a , n , sizeof(a))
#define FOR(i,a,b) for(int i = a ; i <= b ;i++)
#define RFOR(i,a,b) for(int i = b ; i >= a ; i--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pi;
typedef vector<ll>vll;
typedef vector<int>vii;
typedef pair<int,int>pl;
const int MOD = 1e9 + 7;

int n, X, Y, m[1005][1005], dis[1005][1005];
pair< int, int > a, b, res = { -1, -1};
int dx[] = { 1, -1, 0 , 0 };
int dy[] = { 0, 0, 1 , -1 };

pair< int, int > find_by_val(int x){
	for(int i = 1; i <= n; ++i) for(int j = 1; j <= n; ++j) if(m[i][j] == x) return { i, j };
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

void init(){
	cin >> n >> X >> Y;
	for(int i = 0; i <= n; ++i) for(int j = 0; j <= n; ++j) dis[i][j] = 0;
	int val = 1, t = 1, tn = n;
	while(val <= n *n){
		for(int i = t; i <= tn; ++i) m[t][i] = val++;
		for(int i = t + 1; i <= tn; ++i) m[i][tn] = val++;
		for(int i = tn - 1; i >= t; --i) m[tn][i] = val++;
		for(int i = tn - 1; i >= t + 1; --i) m[i][t] = val++;
		++t, --tn;
	}
	a = find_by_val(X);
	b = find_by_val(Y);
}

bool can(int x, int y){
	return x >= 1 && x <= n && y >= 1 && y <= n && dis[x][y] == 0;
}

void solve(){
	init();
	queue< pair< int, int > > q;
	dis[a.fi][a.se] = 1;
	q.push(a);
	while(!q.empty()){
		int x = q.front().fi;
		int y = q.front().se;
		q.pop();
		for(int i = 0; i < 4; ++i){
			int u = x + dx[i];
			int v = y + dy[i];
			if(can(u, v) && gcd(m[x][y], m[u][v]) == 1)
			{
				dis[u][v] = dis[x][y] + 1;
				if(u == b.fi && v == b.se)
				{
					cout << (dis[u][v] - 1) << endl;
					return;
				}
				q.push({ u, v});
			}
		}
	}
	
	cout << "-1\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--) solve();
	return 0;
}
