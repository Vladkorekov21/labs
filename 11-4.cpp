#include <iostream>
using namespace std;

int n;

struct Queue
{
	int data;
	Queue* next;
};

Queue* make(int n, Queue*& first, Queue*& last)
{
	if (n <= 0)
	{
		cout << "������� �� ����� ���� �������" << endl;
		return NULL;
	}
	Queue* p = new Queue;
	int a;
	cin >> a;
	p->data = a;
	p->next = NULL;
	first = p;
	last = p;
	for (int i = 2; i <= n; i++)
	{
		Queue* h = new Queue;
		cin >> a;
		h->data = a;
		h->next = p;
		last = h;
		p = last;
	}
	return first;
}

void print(Queue* last)
{
	Queue* p = last;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

void del_even(Queue* last)
{
	Queue* p = last->next;
	Queue* prev = last;

	while (p->next != NULL)
	{
		Queue* even = p;
		p = p->next;
		delete even;
		prev->next = p;
		prev = p;
		if (p->next != NULL)
			p = p->next;
	}
	if (prev->next == p)
	{
		delete p;
		prev->next = NULL;
	}
}


int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "������� ���������� ��������� �������: ";
	cin >> n;

	Queue* first, * last;

	make(n, first, last);

	cout << "�������: ";
	print(last);

	del_even(last);

	cout << "������� ����� ��������: ";
	print(last);
	return 0;
}