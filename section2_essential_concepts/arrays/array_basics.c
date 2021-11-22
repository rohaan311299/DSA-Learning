#include <stdio.h>
int main()
{
    int A[5];                    // declaring an array
    int B[5] = {2, 4, 6, 8, 10}; // intiliasing an array

    // printing an array
    for (int i = 0; i < 5; i++)
    {
        printf("%d", B[i]);
    }
    return 0;
}
