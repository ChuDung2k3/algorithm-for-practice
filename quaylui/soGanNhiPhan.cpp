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
    string s;
    cin >> s;
    char cnt = '0';
    for(int i = 0 ; i < s.size(); ++i)
    {
    	if(cnt < s[i]) cnt = s[i];
	}
	cout << cnt << endl;
	return 0;
}

