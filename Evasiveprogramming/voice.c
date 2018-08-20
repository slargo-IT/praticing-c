#include <stdio.h>
#include "voice.h"
#include "mainfunction.h"

static int attitude;
static int scndattitude;
static int relance;


//Presentation : Determine l'attitude de l'user.

void presentation(void){
    printf("Bienvenue dans le premier logiciel de tchatbot realise par slargo\n");
    printf("C'est un honneur pour nous de vous presenter ce premier logiciel, d'une complexite semi importante pour un noob.\n");
    printf("Tout d'abord, permettez moi de vous demander comment allez vous ?\n\nBien = 1 Normal = 2 Mal = 3 Osef = 4 ?\n\nVeuillez entrer votre reponse : \n\n");
    scanf("%d", &attitude);
    printf("\nVous avez choisi la reponse : %d\n", attitude);

    }

// Premier brief : Classe l'user dans une categorie

void premierbrief(void){
    if(attitude == 1){
        printf("\nEt bien, ca fait plaisir !\n");
    }
    else if (attitude == 2)
        printf("\nPas de nouvelle, bonne nouvelle.\n");

    else if (attitude == 3)
        printf("\nMince alors.. que passa amigo ?\n");

    else
        printf("\nSen bas les couilleeees sen bas les couilles senba senba senba les couilles!\n");

}

void secondpresentation(void){
    if(attitude == 1){
        printf("\n Apprenons a nous connaitre. Vous sentez vous a l'aise de continuer ?\n Oui = 1 Non = 2 : ");
        scanf("%d", &scndattitude);
        if (scndattitude == 1){
            printf("\nC'est parti pour le show.\n");
            secondclassement();
            }
        else
            presentation();
}
    else if(attitude == 2){
        printf("\n Hey bro, peut etre qu'on peut s'amuser. Te sens tu a l'aise pour continuer ?\n Oui = 1 Non = 2 : ");
        scanf("%d", &scndattitude);
        if (scndattitude == 1){
            printf("\nC'est parti pour le show.\n");
            secondclassement();
            }
        else
            presentation();
    }

    else if(attitude == 3){
        printf("\n Bon, je sens que t'as besoin de parler. Est-ce qu'il y a un sujet particulier qui te pose probleme ?\n Oui = 1 Non = 2 : ");
        scanf("%d", &scndattitude);
        if (scndattitude == 1){
            printf("\nOn va resoudre tout ca \n");
            interractions();
            }
        else
            presentation();
    }

    else{
        printf("\n Les c. vont mieux ? Envie de voir un truc marrant ?\n Oui = 1 Non = 2 : ");
        scanf("%d", &scndattitude);
        if (scndattitude == 1){
            printf("\nC'est parti pour le show... HARDCORE STYLEEEE \n");
            troll();
            }
        else
            presentation();
    }

}

void secondclassement(void){
    printf("-------------------Show FINAL-----------.");
    }

void interractions(void){
    printf("Soins divins");
}

void troll(void){
    printf(" VOUS SEREZ CONDAMNE TOUT VOTRE VIE A ECRIRE EN JAVA MOHHAHAHA");
}

void findujeu(void){
    printf("Envie de rejouer ? Oui = 1 Non = 2 : ");
    scanf("%d", &relance);
    if(relance == 1){
    presentation();
}
    else if(relance == 2){
    printf("Au revoir ! ");
}

    else{
    printf("Well, something go wrong.");
}
}


