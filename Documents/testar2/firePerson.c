#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void firePerson(Person group[]) {
    int number;
    printf("Enter the number of the position to fire: ");
    scanf("%d", &number);
    getchar();  // Remove the newline character from the input buffer

    if (number < 1 || number > NUM_PERSONS) {
        printf("Invalid position number. Please try again.\n");
        return;
    }

    if (!group[number - 1].isRecruited) {
        printf("This position has not been hired yet.\n");
        return;
    }

    group[number - 1].isRecruited = 0;
    group[number - 1].name[0] = '\0';

    printf("Person fired successfully.\n");
}
