#include <stdio.h>
#include <stdlib.h>

/*
    fopen(fichier(mode ouverture)) : r (lecture seule)
                                   : w (ecriture seule)
                                   : r+ (lecture/ecriture)
                                   : w+ (lecture/ecriture) supprime contenue
                                   : a+ (ajout lecture/ecriture)

    fclose (ferme un fichier ouvert)
    [lecture]
    fgets(fichier) : lire un caractere
    [ecriture]


*/

int main(void)
{
    FILE *fic = fopen("Langage C#16 - fichiers.txt", "r");
    int lettre = 0 ;

    if(fic == NULL)
        exit(1);

    lettre = fgetc(fic);
    printf("%c\n",lettre);

    lettre = fgetc(fic);
    printf("%c\n",lettre);
     fclose(fic);


    return 0;
}
