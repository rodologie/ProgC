#include <stdio.h>
#include <stdlib.h>
#include <fichier.h>

int main()
{
    char phrase[100];
    printf("Quelle phrase/ mot souhaitez-vous chercher ? : \n");
    fgets(phrase,100,stdin);

    lire_fichier("./rechercheFichier.txt");
    char size = lire_fichier("./rechercheFichier.txt")[2]; // Comment recuperer la variable content et size dans lire fichier ? Est-ce possible?
    for(int cpt=0 ; cpt < size; cpt ++) 
    {
        if(strmcp(phrase, content)==0)  // meme pb
        {
            printf("Votre phrase apparait à la ligne : %d \n",cpt);

        }
    }
}