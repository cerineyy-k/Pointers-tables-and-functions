#include <stdio.h>

int main()
{
    int a;
    float b = 1;
    int *p1;    // pointer to int
    float *p2;  // pointer to float

    a = 10;
    printf("The value of a : %d\n", a);

    /* We can display the address of a variable using %p format and ampersand & */
    printf("The variable a is stored at address: %p\n", &a); 

    p1 = &a;
    printf("The value of p1 is : %p\n", p1);

    // We can access a via the pointer p1, using the indirection operator *
    printf("The value of a via *p1 is : %d\n", *p1);

    p2 = &b;
    *p2 = (float)a / 4;     // converts a (10) to float and divides by 4 → 2.5
    printf("The value of b is : %f\n", b);
    printf("The variable b is stored at address %p\n", p2);

    // Increment pointers
    p2++;
    p1++;  // increments are done according to the size of the pointed type

    printf("The value of p1 after increment : %p\n", p1);
    printf("The value of p2 after increment : %p\n", p2);

    getchar();
    return 0;
}
