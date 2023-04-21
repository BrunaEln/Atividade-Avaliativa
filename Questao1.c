#include <stdio.h>

main () {

    int valorA, valorB, valorC, valorD, diferenca;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &valorA);
    printf ("Digite o segundo numero: ");
    scanf ("%d", &valorB);
    printf ("Digite o terceiro numero: ");
    scanf ("%d", &valorC);
    printf ("Digite o quarto numero: ");
    scanf ("%d", &valorD);
    system ("cls"); 

    diferenca = (valorA*valorB) - (valorC*valorD);

    printf ("DIFERENCA = %d x %d - %d x %d", valorA, valorB, valorC, valorD);
    printf ("\nDIFERENCA = %d", diferenca);
}