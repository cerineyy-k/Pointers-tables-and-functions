#include <stdio.h>

void f1(int x) // pass by value
{
    x = x / 2;
    printf("The value of x in f1 is: %d\n", x);
}


void f2(int *x) // pass by address
{
    *x = *x / 2;
    printf("The value of x in f2 is: %d\n", *x);
}


void f3(int *t) // pass array by pointer
{
    int i;
    for (i = 0; i < 5; i++)
        t[i] = t[i] + 3; 
}

void f3_operator(int *t) // pass array by pointer
{
    int i;
    for (i = 0; i < 5; i++)
        *(t+i) = *(t+i) + 3; 
}

void f4(int *x, int y)
{
    *x = *x * 10;
    y = *x - 50;
    printf("The value of x is: %d, y is: %d in the function f4 \n",*x, y);
}

int main()
{
    int x = 50;
    int t[5] = {5, 0, -11, 27, -2};
    int y = -200;
    int i;

    f1(x); //tramnsmit by value      f1(50)
    printf("The value of x out of the function f1 is: %d\n", x);





    f2(&x); // transmit by address  
    printf("The value of x out of the function f2 is: %d\n", x);



    f3(t); // transmission of a vector t by address
    printf("The vector out of the function f3 contains the following values:\n");
    for (i = 0; i < 5; i++)
        printf("t[%d] = %d\n", i, t[i]);


    f4(&x, y);
    printf("The value of x out of function f4 is: %d\n", x);
    printf("The value of y out of function f4 is: %d\n", y);

    getchar();
    return 0;
}
