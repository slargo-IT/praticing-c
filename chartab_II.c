#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char prenom[256] = "Jason";
    signed char stockage[256];

    printf("Ton prenom de base : %s\n", prenom);
    printf("Quel est ton vrai prenom ?\n");
    scanf("%s", stockage);
    strcpy(prenom, stockage);
    printf("Ton nouveau prenom %s\n", prenom);

    return 0;
}
