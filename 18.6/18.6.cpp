#include <iostream>
#include "List.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	List a(5);
	cout << "Создание списока а" << endl;
	cout<<a<<"\n";
	cin>>a;
	cout << " Заполненный список а" << endl;
	cout<<a<<"\n";
	a[2] = 100;
	cout << "После обращению к эл по индеку и переприсваивания в списке а" << endl;
	cout<<a<<"\n";
	cout << "Разыменовывание указателя на 1 эл" << endl;
	cout << *(a.first()) << endl;
	Iterator i = a.last();
	--i;
	cout << "Переход к предыдущему элементу списка а" << endl;
	cout << *i << endl;
	cout << "Вывод значений списка а с помощью итератора и разыменовывания указателя" << endl;
	for (i = a.first(); i != a.last(); ++i)
		cout << *i << " ";
	cout << endl;
	List b(10); 
	cout << "Создание списока b" << endl;
	cout<<b<<"\n";
	b = a;
	cout << "Присваивание списку b список а" << endl;
	cout<<b<<"\n";
	b = a + b;
	cout << "Cумма a и b"<< endl;
	cout << b << "\n";
	List c(10);
	c=b+100;
	cout << "Прибавление константы каждому элементу списка и присваивание их значений списку с" << endl;
	cout<<c<<"\n";
}
