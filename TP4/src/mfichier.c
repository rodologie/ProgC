#include <stdio.h>
#include <stdlib.h> 
#include "fichier.h" 
 
int main(int argc, char *argv[])
{
    char action_utilisateur; 
    printf("Voulez vous lire (l) ou ecrire (e) le fichier ? \n");
    fgets(&action_utilisateur, 2, stdin);  
    printf(" Vous avez choisi la lettre %c !\n\n", action_utilisateur);
    
    if(action_utilisateur == 'e') { 
        char message_utilisateur[100]; 
        printf("Ecrivez ce que vous voulez ajouter : \n");
        fgets(message_utilisateur,100,stdin); 
        ecrire_dans_fichier("./jpp.txt", message_utilisateur);
        
    }
   
 
    return 0;
}