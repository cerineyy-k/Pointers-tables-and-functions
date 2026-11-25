#include<stdio.h>
#include<string.h>
void main()
{
    int t[5] = {10, 20, 30, 40, 50}; 
    char ch[10];
    int i;

    printf ("the value of t is : %p \n", t) ; // t is the address of the vector

    for(i=0 ; i<=4 ; i++){
        printf ("the address of t[%d] est %p", i, &t[i]); // t+i ======== &t[i]      t+i is the address of element t[i]
        printf("  t[%d] = %d \n", i, *(t+i)); // *(t+i) ====== t[i]
    }// we can replace t[i] by *(t+i)
    

    // t[4] = 90;

    *(t+4) = 90; // equivalent to t[4] = 90 ;
    for (i=0 ; i<=4 ; i++)
        printf("t[%d] = %d \n", i, *(t+i));



    // read line from input
    printf("enter a string ch:  ") ; 
    fgets(ch, sizeof(ch), stdin);
    // gets(ch);
    scanf("%9s", ch); // "hello\0"
    printf("the address of the string ch is: %p\n ", ch) ;
    printf("the string ch is : %s asdsdf", ch) ;
    getchar();
}



// gets reads characters from input stream until a newline character or EOF is encountered. It stores the characters in the provided buffer and appends a null terminator at the end. However, gets is unsafe because it does not perform bounds checking on the size of the input, which can lead to buffer overflows if the input exceeds the allocated size of the buffer. This can cause undefined behavior and potential security vulnerabilities. 

// fgets reads a line from the specified input stream and stores it in the provided buffer. and it includes spaces and tabs as part of the input. It stops reading when either a newline character is encountered.

//Therefore, it is recommended to use fgets instead, which allows specifying the maximum number of characters to read, thus preventing buffer overflows.
// fgets includes '\n' at end, if it fits to the maximum size(stays in buffer if didnt fit may appear on next next input function like fgets() or getchar()). But you can safely remove any newline that was stored with:
// ch[strcspn(ch, "\n")] = '\0';

// other alternatives for gets and fgets:

// dynamic memory allocation For situations where you don't know the size of the input line in advance. It automatically allocates and resizes a buffer as needed
// getline(&line, &len, stdin)

// scanf with %s format specifier can be used to read a string until the first whitespace character. However, it does not handle spaces within the input and can lead to buffer overflows if the input exceeds the allocated size of the buffer.