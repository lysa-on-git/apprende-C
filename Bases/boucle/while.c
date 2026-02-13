#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreEntre = 0;
    int compteur = 0;

    while (nombreEntre != 47)
    {
        printf("Taper le nombre 47 !");
        scanf("%d", &nombreEntre);
    }

    while (compteur < 10)
    {
        printf("%d, Salut le Monde\n", compteur + 1);
        compteur++;
    }
}