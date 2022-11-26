#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, u, v;
char a[501][501];
int dx[4]={0,-1,0,1};
int dy[4]={-1,0,1,0};

bool dfs(int i, int j, int pre, int cnt)
{
    if(cnt == 3) return false;
    for(int k = 0; k < 4; ++k)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] != '*')
        {
            if(a[i1][j1] == '.')
            {
                a[i1][j1] = '*';
                int tmp = cnt;
                if(k != pre && a[i][j] != 'S')
                {
                    cnt += 1;
//                    tmp += 1;
                }
//                if(dfs(i1, j1, k, tmp)) return true;
				if(dfs(i1, j1, k, cnt)) return true;
                a[i1][j1] = '.';
                
            }
            else if(a[i1][j1] == 'T')
            {
                if(pre != k ) ++cnt;
                if(cnt <= 2) return true;
            }
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == 'S')
            {
                u = i;
                v = j;
            }
        }
    }
    if(dfs(u, v, 100, 0)) cout << "YES";
    else cout << "NO";
    return 0;
}
