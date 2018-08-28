#include <stdio.h>
#include <stdlib.h>

/*
    fopen(<fichier>, <mode_ouverture>) : r (lecture seule, doit exister)
                                         w (écriture seule)
                                         a (ajout fin fichier)
                                         r+ (lecture/écriture, doit exister)
                                         w+ (lecture/écriture, supprime contenu)
                                         a+ (ajout lecture/écriture, fin de fichier)
    fclose(<fichier>) : fermer un fichier

    feof(<fichier) : tester la fin d'un fichier

    [LECTURE]

    fgetc() : lire un character /
    fgets(<chaine>, <taillechaine>, <fichier>) : lit une ligne
    fscanf(<fichier>, <format>, ...) : Lire du texte formaté

    [Ecriture]

    fputc(<character>, <fichier>) : ecrit un charactere
            fputc('J', fic);
    fputs(<chaine>, <fichier>)    : ecrit une chaine

    fprintf(<fichier>, <format>, ...) : ecrit du texte formate
            fprintf(fic, "%d %s %d", age, pseudo, abonne);

    [POSITIONNEMENT]

    ftell(<fichier>) : retourne position curseur dans fichier
    fseek (<fichier>, <deplacement>, <const/origine>) : deplace le curseur
        -> <origine> : SEEK_SET (debut fichier)
                       SEEK_CUR (position courante)
                       SEEK_END (fin du fichier)

    rewind(<fichier>) : reiniatilise la position du curseur

    [DIVERS]

    rename(<anciennom>, <nouveaunom>)
    remove(<fichier>)


*/

int main(void)

{
    FILE *fic = fopen("sauvegarde.txt", "w");
    int position_curseur = -1;
    printf("position : %d\n", ftell(fic));

    fseek(fic, 5, SEEK_SET);
    printf("Position : %d\n", ftell(fic));

    rewind(fic);
    printf("Position %d\n", ftell(fic));

    fclose(fic);

    rename("sauvegarde.txt", "data.txt");
    remove("data.txt");

    return 0;
}
