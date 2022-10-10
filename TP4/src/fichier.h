/* déclarez les fonctions lire_fichier(char
\*nom_de_fichier) et ecrire_dans_fichier(char \*nom_de_fichier,
char \*message). La fonction lire_fichier prend le nom du fichier et
affiche son contenu à l'écran. ecrire_dans_fichier prend le nom du
fichier et écrire le message saisi par l'utilisateur dans le fichier. */

#include <stdio.h> 
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void lire_fichier(char *fichier.c) {

}; 

void ecrire_dans_fichier(char *fichier.c,  char *message ) {
    char content[1000];
    int fd, count, size;
    fd = open ("./file.c", O_RDONLY);
    size = read(fd, content, 1000);
    for (count = 0; count < size; count ++) {
        printf("%c", content[count]); 
    }
    close(fd);
    return 0; 
};

int main(int argc, char ** argv) { 
}