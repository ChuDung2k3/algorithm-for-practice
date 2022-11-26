#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

class SinhVien{
	private:
		string msv, ten, gt;
	public:
		friend istream& operator >> (istream& in, SinhVien &a)
		{
			in >> a.msv;
			in.ignore();
			getline(in, a.ten);
			in >> a.gt;
			return in;
		}
		friend ostream& operator <<(ostream&out, SinhVien a)
		{
			out << a.msv << " " << a.ten << " " << a.gt;
		}
};
struct Node{
	SinhVien val;
	Node *next;
};

int size(Node *head)
{
	int cnt = 0;
	while(head != NULL)
	{
		++cnt;
		head = head->next;
	}
	return cnt;
}
Node *makeNode(SinhVien x)
{
	Node *tmp = new Node();
	tmp->val = x;
	tmp->next = NULL;
	return tmp;
}
void iLa(Node *&head, SinhVien x)
{
	Node *t = head;
	Node *tmp = makeNode(x);
	if (head == NULL)
	{
		head = makeNode(x);
	}
	else
	{
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = tmp;
	}
}
void iFi(Node *&head, SinhVien x)
{
	Node *tmp = makeNode(x);
	tmp->next = head;
	head = tmp;
}
void xoa(Node *&head, int i)
{
	int n = size(head);
	cout << n <<" " << i <<'\n';
	if (n == 0 || i > n || i <= 0)
	{
	 	cout << "Khong co phan tu de xoa\n"; return;
	} 
	Node *tmp = head;
	if (i == 1)
	{
		head = tmp->next;
		return;
	}
	if(i == 2)
	{
		tmp->next= tmp->next->next;
		return;
	}
	for (int k = 1; k <= i - 2; ++k)
	{
		tmp = tmp->next;
	}
	// tmp : i - 1;
	tmp->next = tmp->next->next;
}
void thayThe(Node *&head, int i)
{
	int n = size(head);
	SinhVien x;
	cout << "Nhap ten sinh vien can thay the: \n";
	cin >> x;
	Node *tmp = head;
	Node *newNode = makeNode(x);
	if (i > n || i <= 0|| n == 0)
	{
		cout << "Loi!!\n";
		return;
	}
	if(i == 1)
	{
		newNode->next = tmp->next;
		head = newNode;
		return;
	}
	if (i == 2)
	{
		newNode->next = tmp->next->next;
		tmp->next = newNode;
		return;
	}
	for(int k = 1; k <= i - 2; ++k)
	{
		tmp = tmp->next;
	}
	newNode->next = tmp->next->next;
	tmp->next = newNode;
}
void duyet(Node *head)
{
	while(head != NULL)
	{
		cout << head->val <<'\n';
		head = head->next;
	}
}
int main()
{
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    Node *head = NULL;
	SinhVien x; cin >> x;
	iLa(head, x);
	cin >> x;
	iFi(head, x);
	cin >> x;
	iFi(head, x);
	duyet(head);
//	xoa(head, 3);
	thayThe(head, 3);
	duyet(head);
	return 0;
}
//123123
//Chu Dung
//10/04/2003
//213123
//Pham Linh
//21/2/2003
//56756756
//Superman
//12/8/2003
