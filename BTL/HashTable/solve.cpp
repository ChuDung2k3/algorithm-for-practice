#include<bits/stdc++.h>
#include "conio.h"
#include "stdio.h"
#include"BOOK.cpp"
#include"hashtbl.cpp"
#include<fstream>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int maxn = 1e9 + 7;


vector<book> v;
int h(int key, int n)
{
	 return key % n;
}

void init(book a[], int n)
{
	for (int i = 1; i <= n; ++i)
	{
		v.pb(a[i]);
	}
}
void read(fstream &f, int n, book a[])
{
	for(int i = 1; i <= n; ++i)
	{
		a[i].doc(f);
	}
}
void nap(book a[], int n, Hashtable<int, book> &ht)
{
	for(int i = 1;i <= n; ++i)
	{
		ht.Add(a[i].getId(), a[i], h);
	}
}
void search(book a[], int n, Hashtable<int, book> ht)
{

	cout << "Nhap ma sach can tim kiem:";

	int key = 0;
	cin >> key;
	

	Node<int, book> *p;
	 p  = ht.Find(key, h);
	if (p == NULL) cout << "Khong co sach can tim:\n";
	else
	{
		cout<<"Tim thay sach co id "<<key<<'\n'<<"Thong tin sach: "<<p->getElem() <<'\n';
	}

}

void add(Hashtable<int, book> &ht)
{
	cout << "Nhap thong tin sach can them: \n";
	book x;
	cin >> x;
	Node<int, book> *p;
	p = ht.Find(x.getId(), h);
	if (p != NULL) cout << "Da ton tai id!!\n";
	else 
	{
		ht.Add(x.getId(), x, h);
		v.pb(x);
		cout << "Da them thanh cong!!\n";
	}
}

void del(Hashtable<int, book> &ht)
{
	cout <<"!!Luu y: May tinh se duoc xoa tung quyen mot!!\n";
	cout << "Nhap ten sach can xoa: \n";
	cin.ignore();
	string name; getline(cin, name);
	int key = 0, pos_v = 0;
	for(int i = 0; i < v.size(); ++i)
	{
		if (v[i].getTen().compare(name) == 0)
		{
			key = v[i].getId();
			pos_v = i; // vi tri trong Vector
			break;	
		}
	}
	if (key == 0) cout <<"Khong ton tai sach: \n";
	else
	{
		ht.Remove(key, h);
		
		//Neu so quyen sach > 1 thi giam di 1 quyen
		if (v[pos_v].getSl() > 1)
		{
			int tmp = v[pos_v].getSl() ;
			v[pos_v].setSl(tmp - 1);
			ht.Add(key, v[pos_v], h);
		}
		else
		{
			v.erase(v.begin() + pos_v);
		}
		cout <<"Da xoa thanh cong\n";
	}
}
void duyet(Hashtable<int, book> ht, book a[], int n)
{
	SingleList<int, book> *tb = ht.getTable();
	for(int i = 0; i < 499; ++i)
	{
		Node<int, book> *p = tb[i].first();
		while (p != NULL)
		{
			cout <<"Khoa : "<< i <<" " << p->getElem() << '\n';
			p = p->getNext();
		}
	}
}

void save(Hashtable<int, book> ht)
{
	fstream f;
	bool ok = false;
	f.open("saved_file.txt", ios::out);
	SingleList<int, book> *tb = ht.getTable();
	for(int i = 0; i < 499; ++i)
	{
		Node<int, book> *p = tb[i].first();
		while (p != NULL)
		{
			ok = true;
			string tmp = "";
			tmp = "Khoa : " + to_string(i) + " ";
			f << tmp;
			p->getElem().ghi(f);
			p = p->getNext();
		}
	}
	if (ok) cout << "SAVED!!!\n";
	else cout << "Imformation not found!!!\n";
	f.close();
}
int main()
{
	fstream f;
	f.open("sach.txt", ios::in);
	int n;
	f >> n;
	book a[n + 1];
	read(f, n, a);
	init(a, n);
	Hashtable<int, book> ht(499);
	nap(a, n, ht);
//	 Tao menu
	int q = 9; 
	while(q != 6)
	{
		cout <<"-----------------------------\n";
		cout <<"|1.Tim kiem sach            |\n";
		cout <<"|2.Them sach vao thu vien   |\n";
		cout <<"|3.Xoa sach theo ten        |\n";
		cout <<"|4.Luu file                 |\n";
		cout <<"|5.Duyet HashTable          |\n";
		cout <<"|6.Thoat                    |\n";
		cout <<"-----------------------------\n";
		
		cin >> q;
		if (q == 1)
		{	
			search(a, n, ht);
		}
		if (q == 2)
		{
			add(ht);	
		}
		if (q == 3)
		{
			del(ht);
		}
		if (q == 5)
		{	
			duyet(ht, a, n);
		}
		if ( q == 4)
		{
			save(ht);
		}
	}
	f.close();
}

