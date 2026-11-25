#include <stdio.h>
#include <stdlib.h> // for malloc and free

int main()
{
    int *V;
    int n, i;

    printf("Enter the size of the vector (n): ");
    scanf("%d", &n);

    // Dynamic allocation
    V = malloc(n * sizeof(int));
    if (V == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill vector with multiples of 10
    for (i = 0; i < n; i++)
        *(V + i) = (i + 1) * 10; // v[i]

    // Display vector content and addresses
    printf("\nVector content:\n");
    for (i = 0; i < n; i++)
        printf("V[%d] = %d  (Address: %p)\n", i, *(V + i), (V + i));

    // Free memory
    free(V);

    return 0;
}
