#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

int compareById(const void *a, const void *b) {
    return ((Person *)a)->id - ((Person *)b)->id;
}

void showHiredPositionsSortedById(Person group[]) {
    int numRecruited = 0;
    for (int i = 0; i < NUM_PERSONS; i++) {
        if (group[i].isRecruited) {
            numRecruited++;
        }
    }

    if (numRecruited > 0) {
        Person *hiredPositions = (Person *)malloc(numRecruited * sizeof(Person));
        int index = 0;
        for (int i = 0; i < NUM_PERSONS; i++) {
            if (group[i].isRecruited) {
                hiredPositions[index] = group[i];
                index++;
            }
        }

        qsort(hiredPositions, numRecruited, sizeof(Person), compareById);

        printf("List of already hired positions (Sorted by number):\n");
        printf("Number\tName\n");
        for (int i = 0; i < numRecruited; i++) {
            printf("%d\t%s\n", hiredPositions[i].id, hiredPositions[i].name);
        }

        free(hiredPositions);
    } else {
        printf("No positions have been hired yet.\n");
    }
}
