#include <stdio.h>

main () {

    int c = 1;
    float num, media, calc_media;

    while (c <= 10) {
        c++;
        printf ("Digite um numero: ");
        scanf ("%f", &num);
        media = media + num; 
    }
    calc_media = media / 10.0;
    printf ("Media = %.2f", calc_media);
}
