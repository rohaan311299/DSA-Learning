#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // int A[5];
    // A[0] = 5;
    // A[1] = 10;
    // A[2] = 15;

    int A[5] = {2, 4, 5, 6, 10};
    int B[] = {2, 4, 6, 8, 10, 12, 14};
    int C[10] = {0};              //all elements will be 0
    int D[10] = {2, 4, 6, 8, 10}; //remaining values will be 0

    // taking size as an input
    int n;
    cout << "Enter size";
    cin >> n;
    int E[n]; // variable sized array, it cannot be intialised, it will have all garbage values unless initialised or values are taken in

    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    for (int i = 0; i < 10; i++)
    {
        cout << D[i] << endl;
    }

    // foreach loop
    for (int x : A)
    {
        cout << x << endl;
    }

    return 0;
}

//endl -> next output is on new line
// cout and printf-> to print the output, cin -> to take input in cpp
// if you have intialised few values in an array, then the rest of the elemens will have a value of 0 unless intialised
