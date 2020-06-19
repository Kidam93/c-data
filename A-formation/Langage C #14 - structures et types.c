#include <stdio.h>
#include <stdlib.h>

typedef  struct player
{
    signed char username[256];
    int hp;
    int mp;

} player;


void create_player(player *p)
{
    strcpy(p->username, "benjamin");
    p->hp = 100;
    p->mp = 100;

}

int main (void)

{
    struct player p1 = {"" , 0, 0};

    create_player(&p1);

    printf("nom du joueur %s\n",p1.username);
    printf("hp: %d  mp: %d", p1.hp , p1.mp);

    return 0;
}
