#include "rightangled.h"
#include "Pair.h"
#include <iostream>
using namespace std;
Pair::Pair() { first = 0; second = 0; }
Pair::Pair(int f, int s) {
	this->first = f;
	this->second = s;
}
Pair::Pair(const Pair& t)
{
	first = t.first;
	second = t.second;
}
void Pair::SetFirst(int f)
{
	this->first = f;
}
void Pair::SetSecond(int s)
{
	this->second = s;
}

int Pair::GetFirst()
{
	return first;
}
int Pair::GetSecond()
{
	return second;
}

//methods
void Pair::Show()
{
	cout << "First:  " << first << endl;
	cout << "Second:  " << second << endl;
}