/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h> //charge les programmes pour utilisé les "atoi"
#include <stdio.h> //charge les programmes d'entré et de sortie pour le code en C
// #include <string.h> // dans mes connaissances les stringes servent à afficher du texte et la on charge logiquement les programmes pour pouvoir en utilisé sauf que l'on n'en utilise pas.

int gcd(int a, int b) { /*ici on fait sur du 32 bits le pgdc avec la variable a et b 
                          le gdc est indiquer en dessus du main car apperement celon mes documentation,
                          tous les programmes en c doivent indiquer leur fonction en dessus du main ou en tous cas les déclaré*/
  int r;              // j'ai déclaré la variable r ici, je dois la mettre la car elle est provisoir et utilisé que lors de ce processus
  while (b != 0) { // ici on dit: on veut que b sois à 0 et si il ne l'est pas on recommence
    r = b; // la on indique que l'on retien b
    b = a % b; // ici on divise a par b et on dit que b devient se résultat et ici il prend le résulta du quotient donc si 25 /5 quotient = 0 et b = 0
    a = r; // la a devient r 
  }
  return a; /*donc ici voici un exemple pour bien comprendre se qu'il se passe,
              j'ai b qui dois etre à 0. r "sauvegard" b. dans cette exemple a = 64 et b = 12.
              ensuite je divise 64 par 12 et il me reste 4 car 5x12 = 60.
              mon programe reprend le 12 sauvegarder plus haut et utilise le 4 restant dans b
              on recommence 12 % 4 = 4 et donc il me rest 0 dans b
              on dessant a = 4 et puisque b = 0 on utilise la fonction return a qui va
              envoyer a dans le main en dessous*/
}

int main(int argc, char* argv[]) {  // fonction principale du programme
    if (argc <= 2) {  // ici on dit que si il n'y a pas 2 nombres envoyé au programme,
        return -1; // on indique une erreure
    }

    int a = atoi(argv[1]);   // on indique que la chaine de caracthère entré dans et b doivent etre converti en numérique 
    int b = atoi(argv[2]);   // les argv 1 et 2 sont la pour indiquer que le a est le premier argument introduit et b le second

    int result = gcd(a, b); // on déclare encore la variable result qui elle prend le résulta de gcd (a,b)

    printf("%d\n", result); // ici on affiche la réponse en chiffre de la variable result

    return 0; // fin au programme
}
