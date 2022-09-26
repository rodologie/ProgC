/* Écrivez un programme *etudiant2.c* pour la gestion de données
étudiant.e.es (5 étudiant.e.es) en utilisant struct. Les détails pour
chaque étudiant.e restent les mêmes comme pour l'exercice précédente
(nom, prénom etc.). Vous pouvez utiliser `strcpy` pour initialiser les
noms, prénoms etc. */ 

#include <stdio.h>

struct etudiant{
    char prenom[30];
    char nom[30];
    char rue[30];
    char ville[30];
    short notes;
};

int main() {

    struct etudiant eleve1 = {'Pierre', 'Dupond', '11 rue Salsa','Lyon',15};
    struct etudiant eleve2 = {'Rodolphe', 'Lajugie', '97 rue Duguesclin','Lyon',11};
    struct etudiant eleve3 = {'Valentin', 'Barriquand', '12Ter','Villeurbanne',2};
    struct etudiant eleve4 = {'Lea', 'Colomer', '25 av. Roger Salengro','Villeurbanne',12};
    struct etudiant eleve5 = {'Florian', 'Davaux', '100 av. Roger Salengro','Villeurbanne',18};

return 0;
}