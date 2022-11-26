#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
void check(int **a)
{
	cout << *a<<'\n'; //gia tri con tro la dia chi bien a
	cout << &(**a)<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int *ptr;
    int a = 100;
    ptr = &a;
    cout << &ptr << " " <<ptr<<'\n';
    check(&ptr);
    return 0;
}

