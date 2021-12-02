#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct Rectangle *p = &r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    // how to create an object of rectangle in heap, dynamic allocation of rectangle structure
    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // p1=new Rectangle; // in c
    p1->length = 15;
    p1->breadth = 7;
    cout << p1->length << endl;
    cout << p1->breadth << endl;

    return 0;
}