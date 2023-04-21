#include <stdio.h>

main () {
    int num;
    do {
        printf ("Digite um numero: ");
        scanf ("%d", &num);
    } while (num >= 0);
    printf ("\n\nFim do algoritmo ;)");
}