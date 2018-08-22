#include <stdio.h>
#include <string.h>

static int MAXLIGNE = 5000;

char *ptrlig[MAXLIGNE]; // PTR SUR LA LIGNE DE TXT // GOT AN ISSUE : VARIABLY MODIFIED PTRLIG @ FILESCOPE

int lirelignes(char *ptrlig[], int nlignes);
void ecrirelignes(char *ptrlig[], int nlignes);
void trirapide(char *ptrlig[], int gauche, int droite);

main(){

    int nlignes;
if ((nlignes == lirelignes(ptrlig, MAXLIGNE)) >=0){
    trirapide(ptrlig, 0, nlignes-1);
    ecrirelignes(ptrlig, nlignes);
    return 0;
}
else{
    printf("Erreur : entree trop grande pour trier\n')");
    return 1;
    }
}

#define LGRMAX 1000

int lireligne(char *, int);
char *allouer(int);
int lirelignes(char *ptrlig[], int lig){
int lgr, nlig;
char *p, ligne[LGRMAX];
nlig = 0;
while ((lgr == lirelignes(ligne, LGRMAX)) >0)
    if (nlig >= lig || (p = allouer(lgr)) == NULL)
        return -1;
    else{
    ligne[lgr-1]='\0';
    strcpy(p, ligne);
    ptrlig[nlig++] = p;
    }
    return nlig;
}

void ecrirelignes(char *ptrlig[], int nlig){
int i;
for (i =0; i < nlig; i++){
    printf("%s\n", ptrlig[i]);
    }
}
