#include <stdio.h>

main () {

    int opcao, res;
    float valor, preco = 0;

    do {
    printf ("---------------\nCOMPRA FRUTAS:\n---------------");
    printf ("\n[1] ABACAXI ---> R$ 5,00 (Un.)");
    printf ("\n[2] MACA    ---> R$ 1,00 (Un.)");
    printf ("\n[3] PERA    ---> R$ 4,00 (Un.)\n\n");

    printf ("Escola uma opcao: ");
    scanf ("%d", &opcao);

        switch (opcao) {
            case 1:
            valor = 5.0;
            break;

            case 2:
            valor = 1.0;
            break;

            case 3:
            valor = 4.0;
            break;
        
            default:
            printf ("Digite um numero valido!");
            break;
        }

        preco = preco + valor;
        printf ("\n\nDeseja pedir algo mais?\n[1] SIM || [2] NAO\n");
        scanf ("%d", &res);
    } while (res == 1);
        printf ("Valor de sua compra R$%.2f", preco);
}