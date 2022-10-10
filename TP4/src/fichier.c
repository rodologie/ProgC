/* déclarez les fonctions lire_fichier(char
\*nom_de_fichier) et ecrire_dans_fichier(char \*nom_de_fichier,
char \*message). La fonction lire_fichier prend le nom du fichier et
affiche son contenu à l'écran. ecrire_dans_fichier prend le nom du
fichier et écrire le message saisi par l'utilisateur dans le fichier. */
#include <stdio.h> 
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char lire_fichier(char *nom_fichier) {
    // Fonction renvoyant les caracteres presents dans le fichier 
    char content[]; // Definition de du contenu du fichier 
    int fd, count, size; // declaration des entiers utiles
    fd = open ("./nom_fichier", O_RDONLY); // ouverture du fichier : fichier.docx
    size = read(fd, content, sizeof(content));
    for (count = 0; count < size; count ++) {
        printf("%c", content[count]); 
    }
    close(fd);
    return 0; 
}; 
  
char ecrire_dans_fichier(char *nom_fichier,  char *message ) {
    char message_utilisateur[]; 
    printf("Entrez la phrase que vous souhaitez ajouter : ");
    scanf("%s", message_utilisateur);
    char content[] = message_utilisateur ;
    int fd, count, size;
    fd = open ("./nom_fichier", O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR); size = write(fd, content, sizeof(content));
    close(fd);
    return 0;
};