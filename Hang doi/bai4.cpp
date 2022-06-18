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

void nhiphan(int n)
{
	queue<string> q;
	q.push("1");
	while(1)
	{
		string top = q.front(); q.pop();
		if(res.size() == n) break;
		res.pb(top);
		q.push(top + "0");
		q.push(top + "1");
	}
}
int main()
{
	queue<string> q;
	int n;
	cin >> n;
	nhiphan(n);
	for(int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << " ";
	}
}


