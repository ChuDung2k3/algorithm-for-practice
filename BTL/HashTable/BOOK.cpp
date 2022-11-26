#ifndef BOOK_CPP
#define BOOK_CPP 1
#include<bits/stdc++.h>
#include"conio.h"
#include"iostream"
#include<fstream>
using namespace std;

class book{
	private:
		int id;
		string ten, vitri;
		int sl;
	public:
		friend istream& operator >> (istream &in, book &a)
		{
			cout << "Nhap id: ";
			in >> a.id;
			in.ignore();
			cout <<"Nhap ten: ";
			getline(in, a.ten);
			cout << "Nhap vi tri: ";
			getline(in, a.vitri);
			cout << "Nhap so luong: ";
			in >> a.sl;
			return in;
		}
		friend ostream& operator << (ostream &out, book a)
		{
			out << "Id sach: " << a.id <<", ten: " << a.ten << ", vitri: " << a.vitri << ", so luong: " << a.sl;
			return out;
		}
		string getTen()
		{
			return ten;
		}
		string getVitri()
		{
			return vitri;
		}
		int getSl()
		{
			return sl;
		}
		int getId()
		{
			return id;	
		}
		void setId(int id)
		{
			this->id = id;
		}
		void setTen(string ten)
		{
			this->ten = ten;
		}
		void setViTri(string vt)
		{
			this->vitri = vt;	
		}
		void setSl(int sl)
		{
			this->sl = sl;
		}
		void doc(fstream &f)
		{
			int id, sl;
			string ten, vt;
			f >> id;
			string tmp;
			getline(f, tmp);
			getline(f, ten);
			getline(f, vt);
			f >> sl;
			setId(id);setTen(ten);setViTri(vt);setSl(sl);
		}
		void ghi(fstream &f)
		{
			string tmp = "";
			tmp = to_string(this->id) + " " + this->ten + " " + this->vitri + to_string(this->sl) + '\n';
			f << tmp;
		}
};
#endif

