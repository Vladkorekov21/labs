#include "Vector.h"
//êîíñòðóêòîð áåç ïàðàìåòðîâ 
Vector::Vector(void)
{
beg = 0;
size = 0; 
cur = 0;
}
//äåñòðóêòîð 
Vector::~Vector(void)
{
	if (beg != 0)
		delete[] beg;
	beg = 0;
}
//êîíñòðóêòîð ñ ïàðàìåòðàìè 
Vector::Vector(int n)
{
	beg = new Object* [n]; 
	cur = 0;
	size = n;
}
//äîáàâëåíèå îáúåêòà, íà êîòîðûé óêàçûâàåò óêàçàòåëü p â âåêòîð 
void Vector::Add(Object *p)
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}
//îïåðàöèÿ âûâîäà
ostream& operator<<(ostream& out, const Vector& v)
{
	if (v.size == 0) 
	out << "Empty" << endl;
	Object** p = v.beg;//óêàçàòåëü íà óêàçàòåëü òèïà Object 
	for(int i=0;i<v.cur;i++)
	{
		(*p)->Show();//âûçîâ ìåòîäà Show() (ïîçäíåå ñâÿçûâàíèå) 
		p++;//ïåðåäâèãàåì óêàçàòåëü íà ñëåäóþùèé îáúåêò
	}
	return out;
}
