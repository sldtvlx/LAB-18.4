#pragma once
#include <iostream>
using namespace std;
class Pair
{
    int first;
    int second;
public:
    //constructors
    Pair();
    Pair(int d, int m);
    Pair(const Pair& t);
    //destructor
    ~Pair() {};
    //Getter and Setters
    void SetFirst(int f);
    void SetSecond(int s);
    int GetFirst();
    int GetSecond();

    void Show();
    void IncreaseFirst();
    void IncreaseSecond();


    Pair& operator=(Pair& t);
    friend istream& operator >> (istream& cin, Pair& t);
    friend ostream& operator << (ostream& cout, Pair& t);
};