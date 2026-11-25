#include <stdio.h>
#include <string.h>

typedef struct St
{
    char name[5];
    char firstname[5];
    int age;
} St;

int main()
{
    St person; // variable of type St

    printf("Enter name: ");
    // scanf("%s", person.name);
    fgets(person.name, sizeof(person.name), stdin);
    
    person.name[strcspn(person.name, "\n")] = '\0'; // remove newline fgets if it exists

    printf("Enter firstname: ");
    fgets(person.firstname, sizeof(person.firstname), stdin);
    person.firstname[strcspn(person.firstname, "\n")] = '\0'; // remove newline fgets if it exists

    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("\n--- Memory Addresses ---\n");
    printf("Address of name      : %p\n", &person.name);
    printf("Address of firstname : %p\n", person.firstname);
    printf("Address of age       : %p\n", &person.age);

    printf("\n--- Values and size ---\n");
    printf("Name      : %s, size= %zu\n", person.name, sizeof(person.name));
    printf("Firstname : %s, size= %zu\n", person.firstname, sizeof(person.firstname));
    printf("Age       : %d, size= %zu\n", person.age, sizeof(person.age));

    printf("\nTotal size of struct St = %zu bytes\n", sizeof(St));

    return 0;
}

// You might notice that sometimes the age field address doesn’t start exactly after 60 bytes — sometimes it may be slightly shifted to the next multiple of 4 bytes.

// That’s because most systems align integers (int) on 4-byte boundaries for faster access.
// → The compiler might add padding bytes after firstname if needed.

// The sizeof(St) value would therefore be slightly more than 64 bytes (due to alignment)