#include<iostream>
#include<string>
#include<math.h>
#include<vector>

using namespace std;

class sinhvien{
	int number, day, month, year;
	string name, home;
	float gpa;
	public:
		void input();
		void output();
};
void sinhvien::input(){
	number=this->number;
	day=this->day;
	month=this->month;
	year=this->year;
	name=this->name;
	home=this->home;
	gpa=this->gpa;
		cout<<"\nNumber: ";
		cin>>number;
		cout<<"Name: ";
		cin.ignore();
		getline(cin, name);
		cout<<"Ngay sinh: ";
		cin>>day>>month>>year;
		cout<<"Que quan: ";
		cin.ignore();
		getline(cin, home);
		cout<<"Diem: ";
		cin>>gpa;
}
void sinhvien::output(){
	cout<<"\nNumber: "<<number<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Ngay sinh: "<<day<<"/ "<<month<<"/ "<<year<<endl;
	cout<<"Que quan: "<<home<<endl;
	cout<<"Diem: "<<gpa<<endl;
}

int main(){
	int n;
	cout<<"Nhap n= ";
	cin>>n;
	vector<sinhvien> v(n+1);
	for(int i=0; i<n; i++){
		v[i].input();
	}
	cout<<"\nDanh sach sv:\n";
	for(int i=0; i<n; i++){
		v[i].output();
	}
//	cout<<"\nThem 1 ptu vao cuoi: ";
//	sinhvien add;
//	add.input();
//	v.push_back(add);
//	cout<<"\nDanh sach sau them:\n";
//	for(int i=0; i<n; i++){
//		v[i].output();
//	}



return 0;
}
