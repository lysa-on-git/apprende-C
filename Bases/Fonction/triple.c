#include <stdio.h>
#include <stdlib.h>

int triple(int a)
{
    int resultat = 0;
    resultat = a * 3;

    return resultat;
}

int main() {
    int nombreEntre = 0, nombreTriple = 0; 

    printf("Veuiller entrer le nombre : ");
    scanf("%d", &nombreEntre); 

    nombreTriple = triple(nombreEntre);
    printf("Le triple de %d est %d", nombreEntre, nombreTriple);

    return 0;
}