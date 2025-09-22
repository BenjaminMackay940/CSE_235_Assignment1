#include <stdio.h>
#include "name_reverse.h"
#include "name_length.h"

int main() {
    char name[] = "Benjamin Mackay";
    reverse_order(name);
    letter_count(name);
    return 0;
}