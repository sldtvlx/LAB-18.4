#pragma once
#include "Pair.h"
#include <iostream>
#include <math.h>
using namespace std;

class Rightangled: public Pair
{
	int FirstKat, SecondKat;
public:
	//constructors
	Rightangled() : Pair(), FirstKat(0), SecondKat(0) {};
	Rightangled(int d, int m) : Pair(d, m) {}//,FirstKat(d), SecondKat(m) {};
	Rightangled(Pair t, int d, int m) : Pair(t), FirstKat(d), SecondKat(m) {}

	void PrintInf()
	{
		cout << "\nПервый катет равен:\t" << FirstKat << endl;
		cout << "Второй катет равен:\t" << SecondKat << endl;
	}

	void Hyp(int FirstKat, int SecondKat)
	{
		cout << "Гипотенуза равна: " << sqrt(pow(FirstKat, 2) + pow(SecondKat, 2)) << endl << endl;
	}

	~Rightangled() {};
	void SetFirstKat(int d)
	{
		if (d < 1)
		{
			cout << "error! FirstKat out of range!" << endl;
		}
		else this->FirstKat = FirstKat;
	};
	void SetSecondKat(int m)
	{
		if (m < 1)
		{
			cout << "error! SecondKat out of range!" << endl;
		}
		this->SecondKat = m;
	};

	int GetFirstKat() { return FirstKat; }
	int GetSecondKat() { return SecondKat; }


	Rightangled& operator=(Pair& t)
	{
		this->SetFirst(t.GetFirst());
		this->SetSecond(t.GetSecond());
		return *this;
	}
};