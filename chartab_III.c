#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp() comparer deux chaines lexicographiquement
// strcat() concaténer deux chaines
// strstr() : chercher une chaine dans une autre
// strchr : chercher premiere occurence du charactere


int main()
{
    char texte[] = "Boul et ";
    char mot[] = "Bill";
printf("%s\n", strcat(texte, mot));

    char dico = "Boul et bill";
    if(strstr(texte, mot) != NULL){
        printf("Texte trouver");
    }
    printf("%s\n", strcat(texte, mot));

return 0;
}
