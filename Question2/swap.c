#include <stdio.h>

#define swap(a, b) \
    do { \
        int temp = a; \
        a = b; \
        b = temp; \
    } while (0)

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swap:  x = %d, y = %d\n", x, y);
    return 0;
}