#include <stdio.h>

int main() {
    char mot[] = "hi";
    char mot_copie[sizeof(mot)/sizeof(char)+1]; /* taille du mot copie comme etant celle du mot + le caractere NULL -> sizeof(char) = 1  */
    char mot_autre[]="Guys" ;                     
    char mot_concatene[(sizeof(mot)+sizeof(mot_autre))+1]; /* On definit une chaine de caractere de la taille de mot_autre + mot */
    
    int j;
    int i;
    for(i=0; mot[i] != '\0'; i++) {
     /* On compte la taille de mot (meme si on pouvait utiliser sizeof(mot) comme plus haut) */
        mot_copie[i] = mot[i];
        mot_concatene[i] =mot[i];
    }
    mot_copie[sizeof(mot)-1] = '\0'; /*On enlève le caractere NULL de mot pour ajouter celui de mot_copie */

    for(j=0; j < sizeof(mot_autre); j++) { 
    /* Boucle pour la concatenation de mot_autre puis de mot */
        
        mot_concatene[j+sizeof(mot)-1]= mot_autre[j];    /* -1 pour enlever le NULL de mot */
    }
   

    printf("Nombre de caractere de la chaine : %i \n",i);
    printf("mot copie : %s \n",mot_copie);
    printf("mot concatene: %s \n",mot_concatene);

    return 0;
    
}