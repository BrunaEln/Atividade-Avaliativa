#include <stdio.h>

main () {

    int numero, c = 0, seqFib = 0, num1 = 0, num2 = 1;

    printf ("Digite um numero natural: ");
    scanf ("%d", &numero);

        while (c <= numero) {
            num1 = num2;
            num2 = seqFib;
            seqFib = num1 + num2;
            printf ("%d, ", seqFib);
            c++;
        }
}