#include <stdio.h>
#include <stdlib.h>

int main(void)

{
   int nombre_joueur = 0;
   int *liste_joueur = NULL;
   int i;

   printf("Combien de joueur ?");
   scanf("%d", &nombre_joueur);

   liste_joueur = malloc(sizeof(int) * nombre_joueur);

   if(liste_joueur == NULL)
        exit(1);

   for( i = 0 ; i < nombre_joueur ; i++)
   {
       printf("joueur %d -> numero %d\n", i + 1, i * 3);
       liste_joueur[i] = i * 3;
   }


   for( i = 0 ; i < nombre_joueur ; i++)
   {
       printf("[%d]", liste_joueur[i]) ;
   }
    free(liste_joueur);

    return 0;
}
