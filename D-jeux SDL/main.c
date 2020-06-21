#include <stdio.h>
#include <stdlib.h>
#define aff printf

    double nb1;
    double nb2;
    char op;

int main(void)
{
    double nb1;
    double nb2;
    char op;
    int i;


        aff("Bonjour\n");
        aff("je vais vous calculer des nombres...\n");

        aff("saisiser un nombre : \n", nb1);
        scanf("%lf", &nb1);
        aff("saisisez un operateur : \n", op);
        scanf(" %c", &op);
        aff("saisisez un nombre : \n", nb2);
        scanf("%lf", &nb2);



    switch(op)
    {
    case '+' :
        aff("le resusltat est : %f", nb1 + nb2);
    break;
    case '-' :
        aff("le resusltat est : %f", nb1 - nb2);
    break;
    case '*' :
        aff("le resusltat est : %f", nb1 * nb2);
    break;
    case '/' :
        aff("le resusltat est : %f", nb1 / nb2);
    break;
    }

    return 0;

}
