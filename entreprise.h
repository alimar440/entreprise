#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED

typedef struct{
    char nom[256] ;
    char prenom[256] ;
    char sexe ;
    char metier[256] ;
    int exp ;
    int salaire ;
}Membre_Entreprise ;
/***************************/
typedef struct{
    Membre_Entreprise personnel[256] ;
    int nb ;
}entreprise ;
/***************************/
void saisie_personnel(entreprise *google  ) ;
void affichage_personnel(entreprise google ) ;
void affichage_des_membres_en_fonction_du_salaire(entreprise google , int salaire_recherchE ) ;
void affichage_des_informations_en_fonction_du_metier(entreprise google , char metier_recherchE[] ) ;
void affichage_des_femmes_secretaires(entreprise google ) ;
int masse_salariale(entreprise google ) ;
Membre_Entreprise* affichage_de_femme_ingenieur( entreprise ) ;

#endif // ENTREPRISE_H_INCLUDED
