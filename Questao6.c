#include <stdio.h>

main () {
    int c= 0, multi, soma;

    printf ("_________\nMULTIPLOS\n_________\n");
    while (c <= 1000) {
        c++;
        multi = c;
        if (multi%3==0 || multi%5==0) {
            soma = multi + multi;
            printf ("%d + %d = %d\n", multi, multi, soma);
        }
    }
}