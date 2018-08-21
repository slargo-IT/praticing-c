#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// (*p).username; == p->username;
typedef struct Player
{
    signed char username[256];
    int hp;
    int mp;
} Joueur;

typedef struct Player Player;

void create_player(Player *p){
    strcpy(p->username, "Naokikiki");
    p->hp = 100;
    p->mp = 80;
}
int main()
{
    Joueur p1 = {"", 0, 0};

    create_player(&p1);

    strcpy(p1.username, "Naoki");
    p1.hp -= 50;
    printf("Nom du joueur%s", p1.username);

    return 0;
}
