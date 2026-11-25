#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Etudiant {
    int matricule;
    char name[30];
    char first_name[30];
    struct Date birth_date;
    char status[15];
    char branch[20];
    int study_year;
};

void main()
{
    int total = 0;
    struct Etudiant e;

    total += sizeof(e.matricule);
    total += sizeof(e.name);
    total += sizeof(e.first_name);
    total += sizeof(e.birth_date);
    total += sizeof(e.status);
    total += sizeof(e.branch);
    total += sizeof(e.study_year);

    printf("sum of field sizes = %d bytes\n", total);
    printf("Real size of struct Etudiant = %d bytes\n", sizeof(struct Etudiant));

    printf("Real size of struct Etudiant = %zu bytes\n", sizeof(struct Etudiant)); // special format returns a value of type size_t(unsigned long int) the size of any object 
}