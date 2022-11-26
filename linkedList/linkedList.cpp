#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;
};

node* makeNode(int x)
{
	node *newNode = new node();
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}
void duyet(node *head)
{
	while(head != NULL)
	{
//		cout <<head->data <<' ';
		 cout << head << " " << head->next <<" ";
		head = head->next;
	}
	cout <<'\n';
}
int size(node *head)
{
	int dem = 0;
	while(head !=NULL)
	{
		++dem;
		head = head->next;
	}
	return dem;
}
void pushFront(node **head, int x) // truyen tham chieu dereference
{
	node *newNode = makeNode(x);
	newNode->next = *head; // *head => GIA TRI cua DIA CHI truyen HEAD trong dslk
	*head = newNode;//giai tham chieu != tham chieu
}
void iFi(node *&head, int x) //truyen tham tri
{
	node *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}

void pushBack(node *(*head), int x) // vi truyen con tro voi con tro nen may tinh se mac dinh la truyen kieu doi so (copy, ko lam thay doi gia tri thuc con tro). Muon thay doi phai truyen tham tri, chieu!!!
{
	// dia chi cua head la dia chi cua con tro 
//	node **tmp = head // thay doi tmp thi thay doi CONTRO head
	node *tmp = *head; // *head: gia tri cua head la dia chi cua con tro head
	node *newNode = makeNode(x);
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
}
void iLa(node *&head, int x) // chen cuoi
{
	node *tmp = head;
	node *newNode = makeNode(x);
	if(head == NULL)
	{
		head = newNode;
		return;
	}
	while(tmp->next != NULL )
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void insert(node **head, int k, int x)
{
	int n = size(*head);
	if (k < 1 || k > n + 1) return;
	if (k == 1)
	{
		pushFront(head, x);
		return;
	}
	node *tmp = *head;
	for (int i = 1; i <= k - 2; ++i)
	{
		tmp = tmp->next;
	}
	node *newNode = makeNode(x);
	newNode->next = tmp->next;
	tmp->next = newNode;
}
int main(){
	node *head = NULL; // CONTRO head co GIA TRI NULL
//	for(int i = 1; i <= 5; ++i)
//	{
////		pushFront(&head, i);
////		iFi(head, i);
//		pushBack(&head, i);
////		iLa(head, i);
//	}
	pushFront(&head, 2); // 
	pushBack(&head, 3);
	pushBack(&head, 4);
	pushBack(&head, 5);
	duyet(head);
	return 0;
}
