#include <stdio.h>

void main() {
    int a[4];

    a[0] = 12;
    a[1] = 23;
    a[2] = 34;
    a[3] = 45;

    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    int* b;

    b = a;

    printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
}
