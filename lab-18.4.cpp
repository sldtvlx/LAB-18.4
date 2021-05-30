/*
    Базовый класс: ПАРА_ЧИСЕЛ(PAIR)
    Первое число "first" - int
    Второе число "second - int
    Определить методы изменения полей и вычисления произведения чисел.
    Создать производный класс ПРЯМОУЛЬНЫЙ_ТРЕУГОЛЬНИК (Rightangled), с полями катетами.
    Определить метод вычисления гипотенузы."
*/

#include "Rightangled.h"
#include "pair.h"
#include <iostream>
using namespace std;

int CorrectFirstNum()
{
    int d;
    cout << "Введите первое число:  ";
    cin >> d;
    while (d < 1)
    {
        cout << "Введите число больше 0:  ";
        cin >> d;
    }
    return d;
}
int CorrectSecondNum()
{
    int d;
    cout << "Введите второе число:  ";
    cin >> d;
    while (d < 1)
    {
        cout << "Введите число больше 0:  ";
        cin >> d;
    }
    return d;
}


int main()
{
    setlocale(LC_ALL, "rus");
    Pair A(1, 1);
    A.SetFirst(777);
    A.SetSecond(666);
    A.Show();

    //entering Rightangled
    int first, second;
    first = CorrectFirstNum();
    second = CorrectSecondNum();

    //print class Rightangled
    Rightangled D(32, 13);
    Rightangled C(first, second);
    C.PrintInf();
    cout << "=============================" << endl;

    C.Hyp(first, second);
}