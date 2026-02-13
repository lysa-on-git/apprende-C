#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 1;
    printf("Switch Case");

    switch (age)
    {
    case 1:
        printf("Hello");
        break;

    default:
        printf("Vous avez 0 an");
        break;
    }
}