#include <stdio.h>
#include <stdlib.h>
// alloc memoire
// ['J']
// ['A']
// ['S']
// ['O']
// ['N']
// ['\0']

int main()
{
    signed char mot[] = "bonjour le peuple";
    signed char prenom[26];
    printf("%s\n", mot);
    scanf("%s", prenom);
    printf("Ton prenom -> %s\n", prenom);
2
    return 0;
}
