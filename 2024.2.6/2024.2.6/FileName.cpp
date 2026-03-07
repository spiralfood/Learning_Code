#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
struct list {
	int length;
	node* head;
};
void init(list&l)
{
	node* n = new node;
	n->data = 1;
	n->next = nullptr;
	l.head=n;
}
void add(list& l, int&c, int&d)
{
	node* n = new node;
	n = l.head;
	while (n->data != c)
	{
		n = n->next;
	}
	node* cre = new node;
	cre->data = d;
	cre->next = n->next;
	n->next = cre;
}
void inquire(list& l,int&c)
{
	node* n = new node;
	n = l.head;
	while (n->data != c)
	{
		n = n->next;
	}
	if (n->next)
		cout << n->next->data;
	else
		cout << 0;
}
void del(list& l, int& c)
{
	node* n = new node;
	n = l.head;
	while (n->data != c)
	{
		n = n->next;
	}
	n->next = n->next->next;
}
int main()
{
	list l;
	init(l);
	int a,b;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		if (b == 1)
		{
			int c, d;
			cin >> c >> d;
			add(l, c, d);
		}
		else if (b == 2)
		{
			int c;
			cin >> c;
			inquire(l,c);
		}
		else if (b == 3)
		{
			int c;
			cin >> c;
			del(l, c);
		}	
	}
	return 0;
}