# Bibliothèques
* stdio.h
* stdlib.h

# Références
* internet pour verifier les commandes strcmp ..
* cours
* 

# Difficulté
* Pour les envois entre client.c et serveur.c. C'etait assez compliqué au début de bien comprendre comment cela se deroulait + Quelques difficultés (pb d'espace) dans les conditions strcmp de serveur.c pour qu'il calcule ou renvoie un message.
* 

# Commentaires
* 
* Un peu de mal à savoir comment débuter l'exercice 5.6 quand on est plus en TP (c'est difficile de faire tous les exercices pendant les 4h).



// fe2 = open(nom_fichier2, O_RDONLY); // ouverture du fichier : fichier.txt note2, note3, note4, et note5
      // size2 = read(fe, note2, sizeof(note2)); 
      
      

      //int note1i = atoi(note1);
      //int note2i = atoi(note2);
      //printf("valeur note1 : %s \n", note1);
      //printf("donnée envoyée note1i : %d \n", note1i);
      

      // Definition des données : "calcul etudiant: + note1 note2", "calcul etudiant: + note2 note3", "calcul etudiant: + note3 note4", "calcul etudiant: + note4 note5"
      // /!\ il faut retirer les note en double à la fin ! => note2, note3 et note4
      // strcpy(data,"calcul etudiant: ");
      //printf("donnée %d envoyée : %s \n", j,data);
      // strcpy(data,"+");
      // strcpy(data, note1);
      //strcpy(data, note2); 

      // envoie des données
      // int write_status = write(socketfd, data, strlen(data));
      // if (write_status < 0)
      // {
      //   perror("erreur ecriture");
      //   exit(EXIT_FAILURE);
      // }
      //printf("donnée %d envoyée : %s \n", j,data);

* Diffiulté à faire en sorte que la sortie de la méthode itérative ait la même mise en forme que la commande shell 'ls -R' 