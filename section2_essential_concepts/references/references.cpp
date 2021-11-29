#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // r is reference of a

    int b = 30;
    r = b; // 30 is stored in r ie. 30 is stored in a

    cout << a << endl;
    cout << r << endl;

    return 0;
}