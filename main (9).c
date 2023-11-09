#include <stdio.h>

int main() {
    int list1[] = {50, 60, 70, 80, 90};
    int size = sizeof(list1) / sizeof(list1[0]);

    printf("Salida:\n");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d\n", list1[i]);
    }
