#include <stdio.h>

main () {

    float raio, volume, area, pi=3.14159;

    printf ("----------------------\n\n");
    printf ("CALCULO AREA/VOLUME\n\n");
    printf ("----------------------");
    printf ("\nDigite o valor do Raio (R) da esfera: ");
    scanf ("%f", &raio);
    system ("cls");

    volume = (4.0/3) * pi * pow (raio, 3);
    area = 4 * pi * pow (raio, 2);

    printf ("Volume = %.2f\nArea = %.2f", volume, area);
}