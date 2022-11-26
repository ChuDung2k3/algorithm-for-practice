#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int N = 1001;
int n, m, cnt, res;
vector<int> a[N];
stack<int> st;
int Low[N], Num[N];
void tarjan(int u)
{
	Low[u] = Num[u] = ++cnt;
	st.push(u);
	
	for(auto v: a[u])
	{
		if(Num[v])
		{
			Low[u] = min(Low[u], Num[v]);
		}
		else
		{
			tarjan(v);
			Low[u] = min(Low[u], Low[v]);
		}
	}
	
	if(Num[u] == Low[u])
	{
		res++;
		int tmp;
		do
		{
			tmp = st.top();
			st.pop();
			Num[tmp] = Low[tmp] = INT_MAX;
			
		}while(tmp!= u);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= m; ++i)
    {
    	int u, v; cin >> u >> v;
    	a[u].pb(v);
	}
	for(int i = 1; i <= n; ++i)
	{
		if(!Num[i])
		{
			tarjan(i);
		}
	}
	if(res == 1) cout << "1\n";
	else cout <<"0\n";
	return 0;
}

