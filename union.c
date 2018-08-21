#include <stdio.h>
#include <stdlib.h>

union Nombre{
int *entier;
float *decimal
};

int main(void)
{
    union Nombre nb1;

    nb1.entier = 3;
    nb1.decimal = 3,14;
    int  *pt_1 = nb1.entier;
    int *pt_2 = nb1.decimal;
    printf("%d et %d", *pt_1, *pt_2);

    return 0;
}
