#include <stdio.h>

/*
    (fonction des chaine)
        strcpy : copie une chaine dans une autre
        strlen : longueur dune chaine
        strcmp : comparer deux chaines
        strcat : concatener deux chaines
        strstr : chercher une chaine dans une autre



*/

/*
int main(void)
{
    signed char mot[] = "bonjour, tout le monde";

    printf("%s\n", mot);



    return 0;
}
*/
/*
int main(void)
{
    signed char prenom[26];

    printf("Comment tu t'appelle ?\n");
    scanf("%s", prenom);

    printf("Tu t'appelle %s", prenom);

    return 0;
}
*/

int main (void)
{
    char mot1[] = "benjamin";
    char mot2[] = "laurence";
    int test = strcmp(mot1, mot2);

    if(test == 0)
        printf("les deux mots sont les memes");
    else if (test < 0)
        printf("%s < %s\n", mot1 , mot2);
    else
        printf("%s > %s\n", mot1 , mot2);

        return 0;
}
