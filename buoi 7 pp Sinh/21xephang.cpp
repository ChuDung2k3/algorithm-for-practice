#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	string a[n];
	for(int i = 0; i < n; ++i)cin >> a[i];
	sort(a, a + n);
	int b[n];
	for(int i = 0;i < n; ++i)
	{
		b[i] = i;
	}
	do
	{
		for(int i = 0; i < n; ++i)
		{
			cout << a[b[i]] << " ";
		}
		cout << endl;
	}while(next_permutation(b, b + n));
	return 0;
}
