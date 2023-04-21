#include <stdio.h>
#include <math.h>

main () {

    float x1, x2, y1, y2, distancia;

    printf ("///INFORME OS VALORES///");
    printf ("\n\nDigite o valor de x1: ");
    scanf ("%f", &x1);
    printf ("Digite o valor de x2: ");
    scanf ("%f", &x2);
    printf ("Digite o valor de y1: ");
    scanf ("%f", &y1);
    printf ("Digite o valor de y2: ");
    scanf ("%f", &y2);
    system ("cls");

    distancia = sqrt ((pow (x2, 2) - pow (x1, 2)) + (pow (y2, 2) - pow (y1, 2)));

    printf ("///DISTANCIA///");
    printf ("\n\nO valor correspondente da distancia e de %.4f\n\n", distancia);
}