#include <stdio.h>
#include <stdlib.h>

int main()
{int main() {
    int a�io;
    printf("Ingrese un a�o: ");
    scanf("%d", &a�io);

    if ((a�io % 4 == 0 && a�io % 100 != 0) || a�io % 400 == 0) {
        printf("%d es un a�o bisiesto.\n", a�io);
    } else {
        printf("%d no es un a�o bisiesto.\n", a�io);
    }

    return 0;
}
}
