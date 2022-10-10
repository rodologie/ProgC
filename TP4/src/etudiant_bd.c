/*En réutilisant le code de l'*etudiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *etudiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier etudiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, etudiant.txt */

#include <stdio.h> 
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

char ecrire_dans_fichier(char* nom_fichier,char* message ) { // Les arguments sont des pointeurs
    char content[500]; // Declaration d'une variable content qui contient la chaine de caractere du message de longueur 500 max
    strcpy(content, message) ; // Copie de la chaine de caractere message dans content
    
    int fd, size;
    fd = open (nom_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR);
    size = write(fd, content, strlen(content)); // Ecriture uniquement de la longueur de la chaine de caractere grâce à "strlen" 
                                                //--> sizeof() completait avec des caracteres aleatoires pour obtenir la longueur declaree ligne 27
    close(fd);
    return 0;
};
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
    /* Creation d'une liste pour  limiter le nombre de printf a ecrire */
    liste_eleve[0]= eleve1;
    liste_eleve[1]= eleve2;
    liste_eleve[2]= eleve3;
    liste_eleve[3]= eleve4;
    liste_eleve[4]= eleve5;

    int k;
    for(k=0; k< sizeof(liste_eleve); k++) { // JE NE SAIS PAS COMMENT FAIRE POUR QUE LA STRUCT DEVIENNE UN CHAR ET QUE JE PUISSE LES ECRIRE :)
        char informations[200];
        char np[200], rv[200], np_rv[400];
        np = strcat(liste_eleve[k].prenom,liste_eleve[k].nom);
        rv = strcat(liste_eleve[k].rue,liste_eleve[k].ville);
        np_rv = strcat(np,rv);
        informations = strcat(np_rv,liste_eleve[k].notes );
    }
    
    
    return 0;
}