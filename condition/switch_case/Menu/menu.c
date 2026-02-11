#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix = 0;
    printf("Bienvenu chez Maholy's restaurant\n");
    printf("Voici le menu du jour, vous pouvez choisir parmis les 4 choix : ");
    printf("1. Royal Cheese");
    printf("2. Mc Deluxe");
    printf("3. Mc Becon");
    printf("4. Big Mac");

    printf("Votre choix? : ");
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Vous avez choisi Royal Cheese");
        break;

    case 2:
        printf("Très bon choix le Mc Deluxe");
        break;

    case 3:
        printf("Très bon choix le Mc Becon");
        break;

    case 4:
        printf("Ouuh, vous êtes un peu gourmant de choisir Big Mac");
        break;

    default:
        printf("Désoléé, ce choix ne figure pas sur notre menu");
        break;
    }

    return 0;
}