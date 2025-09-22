#include <stdio.h>
#include <string.h>
#include "name_length.h"

void letter_count(char *name) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ')
            count++;
    }
    printf("Length of Name (without spaces): %d\n", count);
}