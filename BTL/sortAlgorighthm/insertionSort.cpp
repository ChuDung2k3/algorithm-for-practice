#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		int x = a[i], pos = i - 1;
		while (pos >= 0 && x < a[pos])
		{
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    int a[n];
    for (int &x: a) cin >> x;
    insertionSort(a, n);
    for (int x : a) cout << x << " ";
    return 0;
}

