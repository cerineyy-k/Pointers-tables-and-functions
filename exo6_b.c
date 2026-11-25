#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcspn()

int main()
{
    char **A; // pointer to array of pointers
    int n, m, i;

    printf("Enter number of lines (n): ");
    scanf("%d", &n);
    printf("Enter max number of characters per word (m): ");
    scanf("%d", &m);

    getchar(); // consume newline left by scanf

    // Allocate memory for n rows (array of pointers)
    A = malloc(n * sizeof(char *));
    if (A == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for each row (string)
    for (i = 0; i < n; i++)
    {
        A[i] = malloc(m * sizeof(char));
        if (A[i] == NULL)
        {
            printf("Allocation failed for row %d!\n", i);
            return 1;
        }
    }

    // Input words
    printf("\nEnter %d words:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Word %d: ", i + 1);
        // scanf("%s", A[i]);
        fgets(A[i], m, stdin);
        // gets(A[i]);

        // Remove newline character added by fgets (if present)
        A[i][strcspn(A[i], "\n")] = '\0';

        // Remove extra characters in the input stream (if present)
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Display the matrix content line by line
    printf("\nMatrix content:\n");
    for (i = 0; i < n; i++)
        puts(A[i]);

    // Display address of each word
    printf("\nAddresses of each row:\n");
    for (i = 0; i < n; i++)
        printf("Address of A[%d] = %p\n", i, A[i]);

    // Free memory
    for (i = 0; i < n; i++)
        free(A[i]);
    free(A);

    return 0;
}
