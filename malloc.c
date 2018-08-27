#include <stdio.h>
#include <stdlib.h>


int main(void)
{

/*
    sizeof(nomdedonne) : retourne la taille en octet
    malloc(<taille en octet) : allouer dynamiquement memoire
    free(donneallouee) : libere la memoire allouee
    calloc(donnee, tailleenoctects) : alloue et initialise à zero
    realloc(donnee, nouvelle taille) : realloue un espace memoire

*/

    int nombreJoueurs = 2;
    int *liste_joueurs = NULL;
    int i;

    liste_joueurs = calloc(nombreJoueurs, sizeof(int));
    if(liste_joueurs == NULL){
        exit(1);
    }

    for(i = 0; i< nombreJoueurs; i++){
        printf("Joueur %d = > numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i*3;
        }

    for(i = 0 ; i < nombreJoueurs ; i++){
        printf("[%d]", liste_joueurs[i]);
    }

    nombreJoueurs = 5;
    liste_joueurs = realloc(liste_joueurs, nombreJoueurs * sizeof(int));
        if(liste_joueurs == NULL){
        exit(1);}

    for(i = 0; i< nombreJoueurs; i++){
        printf("Joueur %d = > numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i*3;
        }

    for(i = 0 ; i < nombreJoueurs ; i++){
        printf("[%d]", liste_joueurs[i]);
    }


    free(liste_joueurs);

    return 0;
}
