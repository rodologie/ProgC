/* déclarez les fonctions lire_fichier(char
\*nom_de_fichier) et ecrire_dans_fichier(char \*nom_de_fichier,
char \*message). La fonction lire_fichier prend le nom du fichier et
affiche son contenu à l'écran. ecrire_dans_fichier prend le nom du
fichier et écrire le message saisi par l'utilisateur dans le fichier. */
#include <stdio.h> 
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fichier.h"
#include <string.h>
#include <stdlib.h>

char lire_fichier(char *nom_fichier) {
    // Fonction renvoyant les caracteres presents dans le fichier 
    char content[2000]; // Definition  du contenu du fichier de 2000 caracteres max
    //FILE* fd;
    int fd, count, size; // declaration des entiers utiles
    fd = open (nom_fichier, O_RDONLY); // ouverture du fichier : fichier.txt
    size = read(fd, content, sizeof(content)); 
    
    //fread(content,sizeof(char),sizeof(content)/sizeof(content[0]),fd);
    for (count = 0; count < size; count ++) {
       printf("%c", content[count]); 
    }
    close(fd);
    
    return size; 
}; 
  
char ecrire_dans_fichier(char* nom_fichier,char *message) { // Les arguments sont des pointeurs
    // char content[500]; // Declaration d'une variable content qui contient la chaine de caractere du message de longueur 500 max
    // strcpy(content, message) ; // Copie de la chaine de caractere message dans content
    
    FILE* fd;
    fd = fopen (nom_fichier, "a");
    // size = write(fd, content, strlen(content)); 
                                                    /* Ecriture uniquement de la longueur de la chaine de caractere grâce à "strlen"  --> sizeof() completait avec des caracteres aleatoires pour obtenir la longueur declaree ligne 27 */
    fputs(message,fd);
    fclose(fd);
    return 0;
};