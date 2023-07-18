#include <stdio.h>
#include <stdlib.h>
#include "entreprise.h"
#include "entreprise.c"
int main()
{
    entreprise google ;
    saisie_personnel(&google) ;
    printf("**************************AFFICHAGE********************************");

    affichage_personnel(google) ;
    int n = 300000 ;

    printf("\n\n*****affichage_des_membres_en_fonction_du_salaire********\n\n");

    affichage_des_membres_en_fonction_du_salaire(google , n) ;
    char mot[] = "ingenieur" ;

    printf("\n\n******affichage_des_informations_en_fonction_du_metier******\n\n");

    affichage_des_informations_en_fonction_du_metier(google , mot) ;
    printf("*******affichage_des_femmes_secretaires******");

    affichage_des_femmes_secretaires(google) ;

    printf("*******************masse salariale**************************");

    printf("la masse salariale est %d",masse_salariale(google));

    printf("*******affichage_de_femme_ingenieur******");
    affichage_membre(affichage_de_femme_ingenieur(google)) ;

    return 0;
}
