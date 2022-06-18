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

int bfs(int s, int t)
{
    set<int> Se;
    queue<pair<int, int>> q;
    q.push({s, 0});
    while(!q.empty())
    {
        pi top = q.front(); q.pop();
        if(top.fi == t) return top.se;
        int x = top.fi;
        if(x > 1 && !Se.count(x - 1))
        {
            q.push({x - 1, top.se + 1});
            Se.insert(x - 1);
        }
        if(x < t &&!Se.count(x*2))
        {
            q.push({x*2, top.se + 1});
            Se.insert(x * 2);
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cout << bfs(a, b) << endl;    
    }    
    return 0;
}
