#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define SIZE 10

typedef struct {
    int length;
    char name[MAX_NAME_LEN];
} State;

// Function to sort states by length using pointer-based bubble sort
void sortStates(State *arr, int n) {
    State *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = arr; j < arr + n - 1 - (i - arr); j++) {
            if (j->length > (j + 1)->length) {
                temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

// Function to search state by length using linear search with pointer
void searchByLength(State *arr, int n, int targetLength) {
    int found = 0;
    for (State *p = arr; p < arr + n; p++) {
        if (p->length == targetLength) {
            printf("Found: %s (Length: %d)\n", p->name, p->length);
            found = 1;
        }
    }
    if (!found) {
        printf("No state found with length %d.\n", targetLength);
    }
}

int main() {
    State states[SIZE] = {
        { strlen("Kentucky"), "Kentucky" },
        { strlen("Alabama"), "Alabama" },
        { strlen("California"), "California" },
        { strlen("Texas"), "Texas" },
        { strlen("Nevada"), "Nevada" },
        { strlen("Georgia"), "Georgia" },
        { strlen("Florida"), "Florida" },
        { strlen("Ohio"), "Ohio" },
        { strlen("Michigan"), "Michigan" },
        { strlen("New York"), "New York" }  // Note: space is counted in length
    };

    printf("Original List:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s (%d)\n", states[i].name, states[i].length);
    }

    // Sort by length
    sortStates(states, SIZE);

    printf("\nSorted List (by name length):\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%s (%d)\n", states[i].name, states[i].length);
    }

    // Search by length
    int searchLength;
    printf("\nEnter a name length to search for: ");
    scanf("%d", &searchLength);
    searchByLength(states, SIZE, searchLength);

    return 0;
}