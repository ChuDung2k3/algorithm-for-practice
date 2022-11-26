#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

int partition(int a[], int l, int r)
{
	int tmp = a[l];
	int i = l - 1, j = r + 1;
	while(1)
	{
		do
		{
			++i;
		}while(a[i] < tmp);
		do{
			--j;
		}while(a[j] > tmp);
		
		if (i < j) swap(a[i], a[j]);
		else return j;
	}
}
void qSort(int a[], int l, int r)
{
	if (l >= r) return;
	int p = partition(a, l, r);
	qSort(a, l, p);
	qSort(a,p + 1, r);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    qSort(a, 0, n - 1);
    for(int x : a) cout << x << " ";
    return 0;
}

