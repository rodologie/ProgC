#include <stdio.h>
// On inclut les fichiers dans lequel les fonctions sont définies : 
#include "operator.h"
#include "fichier.h" 

int main(){
    printf("====================EXO 1 =====================\n \n \n");
    //opérateur
    int num1 = 3;
    int num2 = 8;
    char operation='+';
    int res;

    switch (operation) {   //on switch en fonction de la valeur de la variable "operation"
        case '+':  res = addition(num1,num2);  // addition
            break;
        case '-':  res = soustraction(num1,num2);  // soustraction
            break;
        case '/':  res = quotient(num1,num2);  // division
            break;
        case '*':  res = produit(num1,num2);  // multiplication
            break;
        case '%':  res = modulo(num1,num2);  // modulo
            break;
        case '&':  res = ET(num1,num2); // ET logique
            break;
        case '|':  res = OU(num1,num2); // OU logique
            break;
        case '~':  res = negation(num1,num2);   //contraire (non x)
            break;
    }
    printf("%d \n",res);

    printf("====================EXO 2 =====================\n \n \n");
    char action_utilisateur;
    printf("Voulez vous lire (l) ou ecrire (e) le fichier ? \n"); // Demande a l'utilisateur ce qu'il veut faire sur le fichier
    scanf("%c", &action_utilisateur); // %c parce qu'on ne demande pas une chaine de caractere mais un caractere unique donc =/= str /!\ on utilise &variable dans scanf

    if( action_utilisateur == 'e') { // Si l'utilisateur ecrit e, nous appelons la fonction ecriture
                                    //'e' permet de comparer un caractere a un autre
        
        char message_utilisateur[100]; // Definition de la taille max d'un message

        printf("Entrez la phrase que vous souhaitez ajouter : ");
        scanf("%[\n]s", message_utilisateur); // message_utilisateur etant deja un pointeur, nous n'avons pas besoin du &. "%[\n]s" permet de recuperer la chaine de caractere jusqu'au saut de ligne.

        ecrire_dans_fichier("./fichierModif.txt", message_utilisateur ); // Nous voulons ecrire une chaine de caractere dons nous ne mettons pas * devant message_utilisateur
        printf("message utilisateur : %s \n", message_utilisateur); /* XXXXX rien ne s'affiche ... pourquoi ???????
    }

    else if( action_utilisateur == 'l') { // Idem mais en lecture => else if c'est pour etre sur que si l'on rentre dans une des conditions, nous ne rentrons pas dans les autres
        lire_fichier("./fichierModif.txt");
    }

    else { // Message d'erreur si aucune des deux lettres n'est pas entree
        printf("La demande n'est pas reconnue \n \n");
        return 1;
    }

    return 0;
}
