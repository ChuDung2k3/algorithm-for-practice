#include<bits/stdc++.h>

using namespace std;


int main()
{

	int n;
	cin >> n;
	int a[n], b[n - 1], c[n - 2];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	for(int &x : c) cin >>x;
	sort(a, a+ n);
	sort(b, b+ n- 1);
	sort(c, c+ n - 2);
	bool ok = false;
	for(int i = 0; i < n - 1; ++i)
	{
		if(a[i] != b[i])
		{
			ok = true;
			cout<< a[i] << endl;
			break;
		}
	}
	if(!ok) cout << a[n -1] << endl;
	ok = false;
	for(int i = 0; i < n - 2; ++i)
	{
		if(b[i] != c[i])
		{
			ok = true;
			cout <<b[i];
			break;
		}
	}
	if(!ok) cout <<b[n - 2];
	return 0;
}
