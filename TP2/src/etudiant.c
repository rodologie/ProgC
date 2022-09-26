#include <stdio.h> // Bibliotèque utilisée

int main()
{

    // Pour la création de chaque liste, on utilise la fonction Char ( chaine de caractère )
    char nom[][3] = {"A1", "A2", "A3", "A4", "A5"};                               // création liste des noms
    char prenom[][15] = {"E1", "E2", "E3", "E4", "E5"};         // création liste des prénoms
    char adresse[][15] = {"44 rue Grignnard", "45 rue Grignnard", "46 rue Grignnard", "47 rue Grignnard", "48 rue Grignnard"}; // création liste des adresses
    char notes_progc[][3] = {"20", "14", "16", "2", "18"};                        // création liste des notes 1
    char notes_syst[][3] = {"20", "6", "17", "8", "12"};                          // création liste des notes 2
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