#include <stdio.h>

int main()
{
    int M[3][2] = {
        {10, 15},
        {-5, 17},
        {11, -9}};

    int i, j;

    printf("Addresses of each row: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Address of M[%d] = %p\n", i, *M[i]); // (M+i) same as &M[i], and *(M+i) same as M[i]
    }

    printf("\nAddresses of each element:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Address of M[%d][%d] = %p\n", i, j, (M[i] + j)); // (*(M+i)+j) same as M[i]+j same as &M[i][j] same as (M[i] + j)
        }
    }

    printf("\nContents of the matrix (line by line):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%4d ", *(M[i] + j)); // *(*(M+i)+j) same as M[i][j] same as *(M[i]+j)
        }
        printf("\n");
    }

    return 0;
}
