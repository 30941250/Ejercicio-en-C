#include <stdio.h>
#include <stdlib.h>

int main()
{int main() {
    int añio;
    printf("Ingrese un año: ");
    scanf("%d", &añio);

    if ((añio % 4 == 0 && añio % 100 != 0) || añio % 400 == 0) {
        printf("%d es un año bisiesto.\n", añio);
    } else {
        printf("%d no es un año bisiesto.\n", añio);
    }

    return 0;
}
}
