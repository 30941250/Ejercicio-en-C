#include <stdio.h>
#include <stdlib.h>

int main()
{int main() {
    int ValorA, ValorB;
    cout << "Ingresar 2 valores enteros: ";
    scanf("%d %d", &ValorA, &ValorB);

    if (ValorA == ValorB) {
        printf("%d y %d son números iguales.\n", ValorA, ValorB);
    } else if (ValorA > ValorB) {
        printf("%d es el mayor y %d es el menor.\n", ValorA, ValorB);
    } else {
        printf("%d es el mayor y %d es el menor.\n", ValorB, ValorA);
    }

    return 0;
}
