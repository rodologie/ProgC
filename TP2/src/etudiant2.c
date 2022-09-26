#include <stdio.h>

struct etudiant{
/* Creation la structure avec les donnees qui nous interessent */
    char prenom[50];
    char nom[50];
    char rue[100];
    char ville[100];
    short notes;
};

int main() {
/* Definition des donnees a chaque identifiant */
    struct etudiant eleve1 = {"Pierre", "Dupond", "11 rue Salsa","Lyon",15};
    struct etudiant eleve2 = {"Rodolphe", "Lajugie", "97 rue Duguesclin","Lyon",11};
    struct etudiant eleve3 = {"Valentin", "Barriquand", "12Ter rue Inkermann","Villeurbanne",2};
    struct etudiant eleve4 = {"Lea", "Colomer", "25 av. Roger Salengro","Villeurbanne",12};
    struct etudiant eleve5 = {"Florian", "Davaux", "100 av. Roger Salengro","Villeurbanne",18};
    
    struct etudiant liste_eleve[5]; 
    /* Creation d'une liste pour ne limiter le nombre de printf a ecrire */
    liste_eleve[0]= eleve1;
    liste_eleve[1]= eleve2;
    liste_eleve[2]= eleve3;
    liste_eleve[3]= eleve4;
    liste_eleve[4]= eleve5;

    int k;
    for(k=0; k< 5; k++) {
    /* Boucle pour n'avoir qu'un seul printf qui renvoie les informations de chaque eleves */
        printf("Informations élèves : %s, %s, %s, %s, %hd \n",liste_eleve[k].prenom,liste_eleve[k].nom,liste_eleve[k].rue,liste_eleve[k].ville,liste_eleve[k].notes);

    }
    
    
    return 0;
}