#include <stdio.h>
#include <stdlib.h>



struct Player
{
    int ageuser;
    int Localisation;
    int Langue;
    unsigned char nomuser[25];
};

int main(void){

    struct Player p1 = {0,0,0,"Salim"};
    printf("%d %d %d %s", p1.ageuser, p1.Localisation, p1.Langue, p1.nomuser);

    return 0;

}
