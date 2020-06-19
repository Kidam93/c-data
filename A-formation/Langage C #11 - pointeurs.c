#include <stdio.h>

int inverser_nombre( int *nombreA, int *nombreB)
{
    int temporaire = 0;

    temporaire = *nombreB;
    *nombreB = *nombreA;
    *nombreA = temporaire;
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 28;

    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombre(&nombreA, &nombreB);
    printf("Apres : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}
