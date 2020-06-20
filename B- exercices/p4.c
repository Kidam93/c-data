#include <stdio.h>
#include <stdlib.h>
#define Nfois 5

int main(void)
{
    int i;
    int nbA;
    int resultat;

    printf("Bonjour\n");
    printf("je vais vous calculer 5 racines carrees\n", Nfois);

    for (i = 0 ; i < Nfois ; i++)
    {
    if (nbA < 0)
    printf (" le nombre selectioner nne possede pas de rzcine carre !");
    else

    printf("entrer une valeur : \n");
    scanf("%d", &nbA);
    resultat = sqrt(nbA);
    printf("le resultat est %d\n ", resultat);

    }

    printf("Vous avez calculer 5 racines carees, au revoir !");

    return 0;

}
