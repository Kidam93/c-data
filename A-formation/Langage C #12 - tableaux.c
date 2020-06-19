#include <stdio.h>
#define TAILLE_TAB 5

void afficher_tableau (int *tab, int taille);

int main (void)
{
    int tableau[TAILLE_TAB] = {16, 4, -5, 22, 168};
    int i;

   afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = 10;

    afficher_tableau(tableau, TAILLE_TAB);

    return 0;
}

    void afficher_tableau (int *tab, int taille)
    {
    int i;

    for( i = 0 ; i < TAILLE_TAB ; i++)
        printf("[%d]", tab[i]);
    }




