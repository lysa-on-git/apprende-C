#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{

    // Variables
    int modeJeu = 0;
    int continuerPartie;
    int difficultie = 0;
    int nombreMystere = 0, nombreEntre = 0;
    const int MIN = 1;
    int nombreMax = 100;
    int compteur = 0;

    // Présentation du jeu
    printf("Bienvenu dans le jeu Plus ou Moins ! \n");
    printf("La règle est de deviner le nombre aléatoire que l'oridinateur ou un autre joueur a choisi\n");
    printf("Près pour commencer la partie ? ");

    // Explication mode de jeu
    printf("Tout d'abord, il y a 2 mode de jeu : Mode Solo, mode Duo\n ");
    printf("Quel mode voulez-vous jouer : \n ");
    printf("1. Mode Solo\n");
    printf("2. Mode Duo\n");

    // Le joueur choisi le mode de Jeu
    do
    {
        printf(" Mode : ");
        scanf("%d", &modeJeu);

        // Joueur contre IA
        if (modeJeu == 1)
        {
            // Le joueur choisi la difficulté du jeu
            printf("Quelle sera la difficulté :  \n");
            printf(" 1 = entre 1 et 100 \n");
            printf(" 2 = entre 1 et 1000\n");
            printf(" 3 = entre 1 et 10000\n ");

            printf("Difficulté : ");
            scanf("%d", &difficultie);
            switch (difficultie)
            {
            case 1:
                nombreMax = 100;
                break;
            case 2:
                nombreMax = 1000;
                break;
            case 3:
                nombreMax = 10000;
                break;
            default:
                printf("Cette difficulté n'existe pas et le nombre sera entre 1 et 100 par défaut \n\n");
                break;
            }

            srand(time(NULL));
            nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;

            // La partie commence !!!
            printf("Prêt ou pas, c'est partiii !! \n");

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
                compteur++;
            } while (nombreEntre != nombreMystere);

            printf("Bravo, vous avez deviné le nombre mystère en %d coups\n\n", compteur);
        }

        // Joueur contre joueur
        else if (modeJeu == 2)
        {
            printf("Un joueur doit saisir le nombre mystère : ");
            scanf("%d", &nombreMystere);

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
                compteur++;

            } while (nombreEntre != nombreMystere);

            printf("Bravo, vous avez deviné le nombre mystère en %d coups\n\n", compteur);
        }

        printf("Voulez-vous recommencer la partie? : ");
        scanf("%d", &continuerPartie);

        if (!continuerPartie)
        {
            printf("A très bientôt\n");
        }

    } while (continuerPartie);

    return 0;
}