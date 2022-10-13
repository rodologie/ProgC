
/*En réutilisant le code de l'*ETIdiant2.c* (TP2) et *fichier.c*, écrivez
un fichier *ETIdiant_bd.c* qui sauvegarde les noms, prénoms, adresses,
et les notes dans un fichier ETIdiant.txt pour 5 étudiant(e)s (une ligne
pour chaque étudiant(e)). Testez votre code. Cette fois, vous demanderez
à l'utilisateur en utilisant scanf pour les détails de chaque étudiant.
Par exemple, ETIdiant.txt */

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
struct Etudiant{
/* Creation la structure avec les donnees qui nous interessent */
    char prenom[50];
    char nom[50];
    char addresse[100];
    short notes[10];
};

int main() {
    struct Etudiant ETI[5];
    
   for (int i =0 ; i<5 ; i++){

        char nom[15];
        printf("Entrez un nom : ");
        scanf("%[^\n]%*c",nom);

        char prenom[10];
        printf("Entrez un prenom : ");
        scanf("%[^\n]%*c",prenom);

        char addresse[30];
        printf("Entrez une addresse : ");
        scanf("%[^\n]%*c",addresse);

        char notes[3];
        printf("Entrez une note : ");
        scanf("%[^\n]%*c",notes);
        
        strcpy(ETI[i].prenom, prenom);
        strcpy(ETI[i].nom , nom);
        strcpy(ETI[i].addresse,addresse);
        strcpy(ETI[i].notes,notes);
    }


    int k;
    for(k=0; k< sizeof(ETI); k++) { // JE NE SAIS PAS COMMENT FAIRE POUR QUE LA STRUCT DEVIENNE UN CHAR ET QUE JE PUISSE LES ECRIRE :)
        ecrire_dans_fichier("./Etudiant_bd.txt",ETI[k].nom);
        ecrire_dans_fichier("./Etudiant_bd.txt",ETI[k].prenom);
        ecrire_dans_fichier("./Etudiant_bd.txt", ETI[k].addresse);
        ecrire_dans_fichier("./Etudiant_bd.txt",ETI[k].notes);
        ecrire_dans_fichier("./Etudiant_bd.txt"," \n");
    }
    
    
    return 0;
}

