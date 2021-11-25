#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{

    // pointer to a variable
    int a = 10;
    int *p; // declaration of pointer
    p = &a; // address of a is stored in p

    cout << a << endl;
    cout << *p << endl;
    printf("%d \n", *p);
    printf("%d \n", p);
    printf("%d \n", &a);

    // pointer to an array
    int A[5] = {2, 4, 6, 8, 10};
    int *q;
    q = A; // no need of & when giving array name to a pointer
    // when using &, use A[0]

    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    // array in heap
    int *r;
    r = (int *)malloc(5 * sizeof(int));
    // r = new int [5];   / dynamic allocating
    r[0] = 10;
    r[1] = 15;
    r[2] = 14;
    r[3] = 21;
    r[4] = 31;

    for (int i = 0; i < 5; i++)
    {
        cout << r[i] << endl;
    }

    // delete[] r;  used in cpp, heap memory should be deallocated

    int *p1;
    char *p2;
    double *p3;
    float *p4;
    struct rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}

// g++ filename.extension -o filename.exe
// if you don't add the * to p while printing, it will print the address of a
// size of pointer is independent ofit's datatype