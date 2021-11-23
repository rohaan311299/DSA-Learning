#include <stdio.h>

struct rectangle
{
    int length;
    int breadth;
};

// complex numbers a+ib
struct complex
{
    int real;
    int imaginary;
};

// student
struct student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];
};

// card
struct card
{
    int face;
    int color;
    int shape;
};

int main()
{
    struct rectangle r;
    r.length = 10;
    r.breadth = 15;

    printf("Area of rectangle=%d", r.breadth * r.breadth);
    printf("%d", sizeof(r));

    struct student s;
    s.roll = 10;
    // s.name = "John";

    struct card c1;
    c1.color = 0;
    c1.shape = 0;
    c1.face = 1;

    struct card c[52];
}