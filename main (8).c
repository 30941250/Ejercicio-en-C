#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Ingresa un número: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("\n No es primo\n");
    } else {
        int divisor;
        int es_primo = 1;

        for (divisor = 2; divisor <= num / 2; ++divisor) {
            if (num % divisor == 0) {
            }
        }

        if (es_primo) {
            printf("Es primo\n");
        } else {
            printf("No es primo\n");
        }
    }

    return 0;
