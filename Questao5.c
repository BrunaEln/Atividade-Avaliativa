#include <stdio.h>
#include <math.h>

int main () {
    int num, divisor, c = 0;
    printf ("Digite um numero: ");
    scanf ("%d", &num);
        while (c <= num) {
            c++;
            divisor = c;
            if (num%divisor==0) {
                    printf ("%d, ", divisor);
            }
        }
}