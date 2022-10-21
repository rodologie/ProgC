#include <stdio.h>
// On inclut les fichiers dans lequel les fonctions sont définies : 
#include "operator.h"
#include "fichier.h" 
#include <stdlib.h>
#include <string.h>
// #define stdin   __stdinp

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
    char action_utilisateur[3];
    printf("Voulez vous lire (l) ou ecrire (e) le fichier ? \n"); // Demande a l'utilisateur ce qu'il veut faire sur le fichier
    fgets(action_utilisateur, 3, stdin);
    printf(" Vous avez choisi la lettre %s  \n", action_utilisateur);

    if (action_utilisateur[0] == 'e') // Si l'utilisateur a entré la lettre e alors on lui demande ce qu'il veut ecrire
    {
        char message_utilisateur[100];
        printf("Ecrivez ce que vous voulez ajouter : \n");
        fgets(message_utilisateur, 100, stdin); // recuperation du message a ecrire dans le fichier fichierModif.txt
        ecrire_dans_fichier("./fichierModif.txt", message_utilisateur); // Appel de la fonction écriture
    }
    else if (action_utilisateur[0] == 'l')
    { // Idem mais en lecture => else if c'est pour etre sur que si l'on rentre dans une des conditions, nous ne rentrons pas dans les autres
        lire_fichier("./fichierModif.txt");
    }
    else { // Condition si jamais aucune des deux lettres n'est reconnue
        printf("Action non reconnue \n");
    }
    return 0;
}
