#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Player
{
    int ageuser;
    int Localisation;
    int Langue;
    unsigned char nomuser[25];
} Player;

void create_player(Player *p){

    strcpy((*p).nomuser, "Naokiki");
}

int main(void){

    struct Player p1 = {0,0,0,"Salim"};


    printf("%d %d %d %s", p1.ageuser, p1.Localisation, p1.Langue, p1.nomuser);

    create_player(&p1);

    printf("\n%d %d %d %s", p1.ageuser, p1.Localisation, p1.Langue, p1.nomuser);

    return 0;

}
