#include <iostream>
#include "windows.h"

using namespace std;


int main()
{
    double S, Pi = 3.14, r = 2, h = 6, V;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    S = 2 * Pi * r * h;
    V = Pi * r * r * h;
    cout << "Площа бічної поверхні=" << S << "cm2" << endl;
    cout << "Об'єм куба=" << V << "cm3" << endl;
    system("pause");
    return 0;

}

