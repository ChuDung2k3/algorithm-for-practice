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

vector<string> v;
void init()
{
	queue<string> q;
	q.push("6");
	q.push("8");
	while(1)
	{
		string tmp = q.front(); q.pop();
		if(tmp.size() == 19) break;
		v.pb(tmp);
		q.push(tmp + "6");
		q.push(tmp + "8");
	}
}
int main()
{
	init();
	int t; cin >> t;
	while(t--)
	{
		vector<string> tmp;
		int cnt = 0;
		int n; cin >> n;
		for(string x : v)
		{
			//cout << x << " ";
			if(x.size() > n) break;
			else 
			{
				tmp.pb(x);
			}
		}
		cout << tmp.size() << endl;
		for(int i = 0; i < tmp.size(); ++i)
		{
			cout << tmp[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
