#include <stdio.h>
#include <stdlib.h>
#include "libex.h"

int main()
{
    Person people;
    printf("Type a CPF without '.' or '-'");
    scanf("%s", people.CPF);
    verify_CPF(people);

    printf("Type a date of birth\n");
    printf("without the '/'\n");
    scanf("%s", people.birth);
    verify_birth(people);

    printf("Type a name\n");
    scanf("%s", people.name);

    print(people);
}   