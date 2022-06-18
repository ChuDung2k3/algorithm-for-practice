#include<bits/stdc++.h>
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define fi first
#define se second
#define ll long long
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;


vector<string> res;

void init(int n)
{
	queue<string> q;
	q.push("6"); q.push("8");
	while(1)
	{
		string top = q.front(); q.pop();
		if(top.size() == n + 1) break;
		res.push_back(top);
		q.push(top +"6");
		q.push(top + "8");
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		init(n);
		for(int i = res.size() - 1; i >= 0; --i)
		{
			cout << res[i] << " ";
		}
		cout << endl;
		res.clear();
	}
}
