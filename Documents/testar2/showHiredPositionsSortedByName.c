#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

int compareByName(const void *a, const void *b) {
    return strcmp(((Person *)a)->name, ((Person *)b)->name);
}

void showHiredPositionsSortedByName(Person group[]) {
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

        qsort(hiredPositions, numRecruited, sizeof(Person), compareByName);

        printf("List of already hired positions (Sorted by name):\n");
        printf("Name\n");
        for (int i = 0; i < numRecruited; i++) {
            printf("%s\n", hiredPositions[i].name);
        }

        free(hiredPositions);
    } else {
        printf("No positions have been hired yet.\n");
    }
}
