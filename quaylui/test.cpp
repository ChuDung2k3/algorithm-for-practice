#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int a[15] , arr[15];
int n , k , sum;
int ans = 0 ;
void BackTrack(int pos , int cnt)
{
    if(arr[cnt - 1] == sum && pos == n + 1 && cnt == k)
    {
        ++ans;
        return;
    }
    for(int j = pos ; j <= n ; j++)
    {
        arr[cnt] += a[j];
        if(arr[cnt] == sum)
        {
            BackTrack(j + 1 , cnt + 1);
            for(int l = cnt + 1 ; l <= k ; l++)
            {
            	cout << l << " ";
                arr[l] = 0;
            }
        }
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    sum = accumulate(a  + 1, a + n + 1, 0);
    if(sum % k != 0) cout << 0;
    else
    {
        sum /= k;
        BackTrack(1 , 0);
       // cout << ans;
    }
}
