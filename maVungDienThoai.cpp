#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{

	map<int,string> mp;
	mp.insert({61,"Brasilia"});
	mp.insert({71, "Salvador"});
	mp.insert({11, "Sao Paulo"});
	mp.insert({21, "Rio de Janeiro"});
	mp.insert({32, "Juiz de Fora"});
	mp.insert({19, "Campinas"});
	mp.insert({27, "Vitoria"});
	mp.insert({31, "Belo Horizonte"});
	int x; cin >> x;
	if(mp.count(x))
	{
		cout << mp[x] << "\n";
	}
	else cout << "DDD nao cadastrado\n";
	return 0;
}

