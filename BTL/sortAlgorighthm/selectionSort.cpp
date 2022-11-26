#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

void selectionSort(int a[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int min_pos = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[min_pos])
			{
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    selectionSort(a, n);
    for (int x : a) cout << x << " ";
    return 0;
}

