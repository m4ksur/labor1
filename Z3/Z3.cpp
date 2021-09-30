#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
    const int maxNumber = 100;
    int* p = 0;
    unsigned i, size;

    do {
        printf("Enter number from 0 to %d: ", maxNumber);
        scanf("%d", &size);
        if (size < maxNumber) {
            break;
        }
    } while (1);

    p = (int*)malloc(size * sizeof(int));

    for (i = 0; i < size; i++) {
        p[i] = i * i;
    }

    for (i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }

    _getch();
    free(p);
}