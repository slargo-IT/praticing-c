#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char prenom[256];
    printf("Comment tu t'appeles ?");
    scanf("%s", prenom);
    printf("Ton prenom %s\n", prenom);
    printf("Tu viens de quel ville ?");
    scanf("%s",prenom);
    printf("Ton prenom -> %s\n", prenom);

    return 0;
}
