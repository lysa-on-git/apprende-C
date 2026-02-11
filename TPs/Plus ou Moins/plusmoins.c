#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int jouer;
    int nombreMystere = 0, nombreEntre = 0;
    const int MIN = 1, MAX = 50;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Bienvenu dans le jeu Plus ou Moins ! \n");
    printf("La règle est deviner le nombre aléatoire que l'oridinateur a choisi entre 1 et 100\n");
    printf("Prêt pour l'aventure ? Je vous souhaite bonne chance ! ");

    printf("Taper 1 si vous voulez jouer");
    scanf("%d", &jouer);

    while (jouer == 1)
    {
        do
        {
            printf("Veuiller saisir le nombre : ");
            scanf("%d", &nombreEntre);

            if (nombreEntre < nombreMystere)
            {
                printf("C'est plus\n");
            }
            else if (nombreEntre > nombreMystere)
            {
                printf("C'est moins\n");
            }

        } while (nombreEntre != nombreMystere);

        printf("Bravo, vous avez deviné le nombre mystère\n");

        printf("Taper 1 si vous voulez rejouer");
        scanf("%d", &jouer);

        if (jouer != 1)
        {
            printf("A très bientôt\n");
        }
    }

    return 0;
}