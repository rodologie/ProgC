#include <stdio.h> // Bibliothèque utilisée

int main()
{

    // Pour la création de chaque liste, on utilise la fonction Char ( chaine de caractère )
    char nom[][30] = {"A1", "A2", "A3", "A4", "A5"};                                                                            // création liste des noms
    char prenom[][30] = {"E1", "E2", "E3", "E4", "E5"};                                                                        // création liste des prénoms
    char adresse[][30] = {"44 rue Grignnard", "45 rue Grignnard", "46 rue Grignnard", "47 rue Grignnard", "48 rue Grignnard"}; // création liste des adresses
    char notes_progc[][30] = {"13", "14", "15", "16", "17"};                                                                     // création liste des notes 1
    char notes_syst[][30] = {"18", "19", "20", "10", "11"};                                                                       // création liste des notes 2
    int i;
    // Affichage de chaque donnés par étudiant, utilisation d'une boucle for, les i correspondent à 1 étudiant
    // De 0 à 4
    for (i = 0; i < 5; i++)
    {
        printf("étudiant %d: %s, %s\n adresse: %s\n note en programmation en c: %s: \n note en système d'exploitation: %s\n", i + 1, nom[i], prenom[i], adresse[i], notes_progc[i], notes_syst[i]);
    }
    return 0;
}
// Dans cet exercice, nous avons créé 5 listes de chaine de caratère et créer une boucle for qui permet d'afficher
// chaque donné pour chaque étudiant
