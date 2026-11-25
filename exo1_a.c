#include <stdio.h>
#include <string.h>

int main()
{
    int x;
    char ch[20] ; // ch is an array of characters

    // char ch[20] = "Hello World"; // ✅ initializes the array ch

    // ch[0] = "Hello"; // ❌ is a string literal, of type char * pointer to the first character in the string
    strcpy(ch, "Hello"); // ✅ copies the string into the array ch

    ch[2] = 'H';    // ✅ single character
    // ch[2] = "H";    // ❌ string (pointer)

    printf("The size of integer = %d\n", sizeof(int));
    printf("The size of variable x = %d\n", sizeof(x));
    printf("The size of float = %d\n", sizeof(float));
    printf("The size of long integer = %d\n", sizeof(long));
    printf("The size of variable ch = %d\n", sizeof(ch));
    printf("The length of string ch = %d\n", strlen(ch)); // don’t confuse with sizeof        "hello\0"
    // getchar();

    printf("ch = %s", ch);
    return 0;
}