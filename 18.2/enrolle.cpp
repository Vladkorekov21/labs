#include "enrolle.h" 
#include <iostream> 
#include <string> 
using namespace std;
enrolle::enrolle()
{
fio = "";
specialty = "";
scores = 0;
cout << "Êîíñòðóêòîð áåç ïàðàìåòðîâ äëÿ îáúåêòà" << this << endl;
}
enrolle::enrolle(string N, string K, int S)
{
	fio = N; 
	specialty = K;
	scores = S;
	cout << "Êîíñòðóêòîð ñ ïàðàìåòðàìè äëÿ îáúåêòà " << this << endl;
}
enrolle::enrolle(const enrolle& t)
{
	fio = t.fio; 
	specialty = t.specialty;
	scores = t.scores;
	cout << "Êîíñòðóêòîð êîïèðîâàíèÿ äëÿ îáúåêòà " << this << endl;
}
enrolle::~enrolle()
{
	cout << "Äåñòðóêòîð äëÿ îáúåêòà " << this << endl;
}
string enrolle::get_fio()
{
	return fio;
}
string enrolle::get_specialty()
{
	return specialty;
}
int enrolle::get_scores()
{
	return scores;
}
void enrolle::set_fio(string N)
{
	fio = N;
}
void enrolle::set_specialty(string K)
{
	specialty = K;
}
void enrolle::set_scores(int S)
{
	scores = S;
}
void enrolle::show()
{
	cout << "ôèî: " << fio << endl; 
	cout << "ñïåöèàëüíîñòü: " << specialty << endl; 
	cout << "êîë-âî áàëëîâ ÅÃÝ: " << scores << endl;
}
