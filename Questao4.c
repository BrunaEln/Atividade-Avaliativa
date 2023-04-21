#include <stdio.h>

main () {
    
    float valorX, valorY;

    printf ("Digite o valor de x: ");
    scanf ("%f", &valorX);
    printf ("Digite o valor de y: ");
    scanf ("%f", &valorY);

        if (valorX > 0 && valorY > 0){
            printf ("O ponto pertence ao Primeiro Quadrante.");
            printf ("\nEixos(X,Y)= (%.1f, %.1f)", valorX, valorY);
        } else if (valorX < 0 && valorY > 0) {
            printf ("O ponto pertence ao Segundo Quadrante.");
            printf ("\nEixos(X,Y)= (%.1f, %.1f)", valorX, valorY);
        } else if (valorX < 0 && valorY < 0) {
            printf ("O ponto pertence ao Terceiro Quadrante.");
            printf ("\nEixos(X,Y)= (%.1f, %.1f)", valorX, valorY);
        } else if (valorX > 0 && valorY < 0) {
            printf ("O ponto pertence ao Quarto Quadrante.");
            printf ("\nEixos(X,Y)= (%.1f, %.1f)", valorX, valorY);
        } else {
            printf ("Eixo = Origem.");
        }
}