/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h> //charge les programmes pour utilisé les "atoi"
#include <stdio.h> //charge les programmes d'entrée et de sortie pour le code en C
// #include <string.h> // dans mes connaissances les strings servent à afficher du texte et la on charge logiquement les programmes pour pouvoir en utiliser sauf que l'on n'en utilise pas.

int gcd(int a, int b) { /*ici on fait sur du 32 bits le PGDC avec la variable a et b 
                          le gdc est indiqué en dessus du main car apparement selon ma documentation,
                          tous les programmes en c doivent indiquer leur fonction en dessus du main ou en tous cas les déclarer*/
  int r;              // j'ai déclaré la variable r ici, je dois la mettre là car elle est provisoire et utilisée que lors de ce processus
  while (b != 0) { // ici on dit: on veut que b soit à 0 et si il ne l'est pas on recommence
    r = b; // là on indique que l'on retient b
    b = a % b; // ici on divise a par b et on dit que b devient ce résultat et ici il prend le résulta du quotient donc si 25 /5 quotient = 0 et b = 0
    a = r; // là a devient r 
  }
  return a; /*donc ici voici un exemple pour bien comprendre se qu'il se passe,
              j'ai b qui dois etre à 0. r "sauvegard" b. dans cette exemple a = 64 et b = 12.
              ensuite je divise 64 par 12 et il me reste 4 car 5x12 = 60.
              mon programme reprend le 12 sauvegardé plus haut et utilise le 4 restant dans b
              on recommence 12 % 4 = 4 et donc il me reste 0 dans b
              on descend a = 4 et puisque b = 0 on utilise la fonction return a qui va
              envoyer a dans le main en dessous*/
}

int main(int argc, char* argv[]) {  // fonction principale du programme
    if (argc <= 2) {  // ici on dit que si il n'y a pas 2 nombres envoyés au programme,
        return -1; // on indique une erreur
    }

    int a = atoi(argv[1]);   // on indique que la chaîne de caractères entrée dans a et b doivent etre converties en numériques 
    int b = atoi(argv[2]);   // les argv 1 et 2 sont là pour indiquer que le a est le premier argument introduit et b le second

    int result = gcd(a, b); // on déclare encore la variable result qui elle prend le résulta de gcd (a,b)

    printf("%d\n", result); // ici on affiche la réponse en chiffres de la variable result

    return 0; // fin du programme
}
