#include<bits/stdc++.h>
#include"conio.h"
#include"iostream"
#include<fstream>
#include"Vector.cpp"
#include"VItr.cpp"
using namespace std;
//----------------Tao so ngau nhien---------
int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}
//----------------------------------------------
bool checkAns[4];
class cauHoi
{
	private:
		string q; // question;
		string *a; // ans;
	public:
		cauHoi()
		{
			a = new string[4];
		}
		friend istream& operator >> (istream& in, cauHoi &x)
		{
			getline(in, x.q);
			for(int i = 0; i < 4; ++i)
			{
				getline(in, x.a[i]);
			}
			return in;
		}
		void xuat()
		{
			char cc = 'A'; //chu cai
			cout <<"Cau hoi: " << q <<"\n";
			cout <<"Phuong an:\n";
			memset(checkAns, 0, 4);
			for(int i = 0; i < 4;++i)
			{
				int tmp = random(0, 3);
				if(checkAns[tmp] == 0)
				{
					cout <<"  "<<cc << ". "<< a[tmp] <<'\n';
					checkAns[tmp] = 1;
				}
				else
				{
					while(checkAns[tmp])
					{
						tmp = random(0, 3);
					}
					cout <<"  " <<cc <<". "<< a[tmp] <<'\n';
					checkAns[tmp] = 1;
				}
				cc+= 1;
			}
		}
		friend ostream& operator << (ostream& out, cauHoi x)
		{
			out <<"Cau hoi: " << x.q <<"\n";
			out <<"Phuong an:\n";
			for(int i = 0; i < 4;++i)
			{
				out << x.a[i] <<'\n';
			}
			return out;
		}
		void doc(fstream&f)
		{
			getline(f, q);
			for(int i = 0; i < 4; ++i)
			{
				getline(f, a[i]);
			}
		}
};
class Thi
{
	private:
		Vector<cauHoi> v;
	public:
		void InsertElement(int r, cauHoi x);
		void ListElement();	
		void GetElement(int r);
};
void Thi::InsertElement(int r, cauHoi x)
{
	v.insertAtRank(r,x);
}
void Thi::ListElement()
 {
	VectorItr<cauHoi> Itr(&v);
	cout<<"Danh sach cac phan tu:\n";
	while(Itr.hasNext())
	{
	  Itr.next().xuat();cout <<'\n';
	}
 }
 void Thi::GetElement(int r)
 {
 	cauHoi x;
	if(v.getAtRank(r,x))
		 x.xuat();
}

int main()
{
	fstream f;
	f.open("questionFile.txt", ios::in);
	int n;
	f >> n;
	string tmp;
	getline(f, tmp);
	cauHoi a[n];
	Thi x;
	for(int i = 0; i < n; ++i)
	{
		a[i].doc(f);
		x.InsertElement(i, a[i]);
	}
//	x.ListElement();
	
	cout << "So cau hoi trong file la: " << n <<'\n';
	cout << "Nhap k - so cau hoi can tao ngau nhien ( k <= " << n <<" ): ";
	int k; cin >> k;
	
	cout << "So de ban muon tao: ";
	int tests; cin >> tests;
	bool checkQuestion[n] = {0};
	for(int i = 1; i <= tests; ++i)
	{
		memset(checkQuestion, 0, n);
		cout <<"\n------------------------De " <<i <<"------------------------\n";
		int tt = 1; // so thu tu cau hoi
		for(int j = 0; j < k; ++j)
		{
			int r_tmp = random(0, n - 1);
			if(checkQuestion[r_tmp] == 0)
			{
				checkQuestion[r_tmp] = 1;
				cout <<tt<<". ";
				x.GetElement(r_tmp);
			}
			else
			{
				while(checkQuestion[r_tmp])
				{
					r_tmp = random(0, n - 1);
				}
				cout <<tt<<". ";
				x.GetElement(r_tmp);
				checkQuestion[r_tmp] = 1;
			}
			tt+=1;
		}
	}

return 0;
}

