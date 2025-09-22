#include <stdio.h>
#include <string.h>
#include "name_reverse.h"

void reverse_order(char *name) {
    char temp[100];
    strcpy(temp, name);

    char *first = strtok(temp, " ");
    char *last = strtok(NULL, "");

    if (first && last) {
        printf("Reversed Name: %s %s\n", last, first);
    } else {
        printf("Error: Name format incorrect.\n");
    }
}