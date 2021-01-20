#include <iostream>
#include "../headers/ZFraction.h"
using namespace std;

int main()
{
    ZFraction a(4,5);
    ZFraction b(4,5);
    ZFraction c,d;
    
    c = a+b;
    d = a*b;

    cout << a << " + " << b << " = " << c << endl;
    cout << a << " * " << b << " = " << d << endl;

    if(a>b)
    {
        cout << "a is bigger than b !" << endl;
    } 
    else if(a==b)
    {
        cout << "a is equal to b !" << endl;
    }
    else 
    {
        cout << "a is smaller than b !" << endl;
    }
    return 0;
}