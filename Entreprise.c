#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entreprise.h"

void saisie_personnel(entreprise *google  ) {
    printf("donnE le nombre de personnel \n") ;
    scanf("%d",&google->nb) ;
    printf("saisie\n\n");
    for(int i = 0 ; i < google->nb ; i++){
        printf("\nle nom du personnel N %d : \n", i+1 ) ;
        scanf("%s",google->personnel[i].nom ) ;
        printf("\nle prenom du personnel N %d :\n", i+1 ) ;
        scanf("%s",google->personnel[i].prenom ) ;
        printf("\nle sexe du personnel N %d : \n", i+1 ) ;
        scanf("%s", &google->personnel[i].sexe) ;
        printf("\nle metier du personnel N %d : \n", i+1 ) ;
        scanf("%s",google->personnel[i].metier) ;
        printf("\n le nombre d'experience du personnel N %d : \n", i+1 ) ;
        scanf("%d", &google->personnel[i].exp ) ;
        printf("\n le salaire du personnel N %d : \n", i+1 ) ;
        scanf("%d",&google->personnel[i].salaire ) ;
        printf("\n\n");
    }
}
void affichage_personnel(entreprise google ) {
    for(int i = 0 ; i < google.nb ; i++){
        printf("\n le nom du personnel N %d : %s\n", i+1 ,google.personnel[i].nom) ;

        printf("\nle prenom du personnel N %d : %s\n", i+1 , google.personnel[i].prenom) ;
        printf("\nle sexe du personnel N %d : %c\n", i+1 , google.personnel[i].sexe) ;
        printf("\nle metier du personnel N %d : %s\n", i+1 , google.personnel[i].metier ) ;
        printf("\nle nombre d'experience du personnel N %d : %d\n", i+1 , google.personnel[i].exp  ) ;
        printf("\nle salaire du personnel N %d : %d\n", i+1 ,google.personnel[i].salaire) ;
        printf("\n\nSUIVANT \n\n") ;
    }
}
void affichage_membre(Membre_Entreprise google ) {

        printf("\n le nom du personnel N %d : %s\n" ,google.nom) ;

        printf("\nle prenom du personnel  : %s \n",  google.prenom) ;
        printf("\nle sexe du personnel : %c\n", google.sexe) ;
        printf("\nle metier du personnel : %s\n", google.metier ) ;
        printf("\nle nombre d'experience du personnel : %d\n", google.exp ) ;
        printf("\nles nombres d'experience du personnel : %d\n", google.exp) ;
        printf("\nle salaire du personnel : %d\n", google.salaire) ;
    }


void affichage_des_membres_en_fonction_du_salaire(entreprise google , int salaire_recherchE ) {
    for(int i = 0 ; i < google.nb ; i++){
        if(salaire_recherchE <= google.personnel[i].salaire)
            affichage_membre(google.personnel[i]) ;
    }
}
void affichage_des_informations_en_fonction_du_metier(entreprise google , char* metier_recherchE ) {
    for(int i = 0 ; i < google.nb ; i++){
        if(strcmp(metier_recherchE , google.personnel[i].metier) == 0)
            affichage_membre(google.personnel[i]) ;
    }
}
void affichage_des_femmes_secretaires(entreprise google ) {
    for(int i = 0 ; i < google.nb ; i++){
        if((strcmp("secretaire" , google.personnel[i].metier ) == 0) &&( google.personnel[i].sexe == 'F' ))
            affichage_membre(google.personnel[i]) ;
    }
}
int masse_salariale(entreprise google ) {
    int sum = 0 ;
    for(int i = 0 ; i < google.nb ; i++){
        sum += google.personnel[i].salaire ;
    }
    return sum ;
}
Membre_Entreprise* affichage_de_femme_ingenieur(entreprise google) {
    for(int i = 0 ; i <= google.nb ; i++){
            if(google.personnel[i].sexe == 'F' && srtcmp(google.personnel[i].metier , "ingenieur") == 0 )
                return google.personnel[i]
    }
}

