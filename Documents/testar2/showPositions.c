#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void showPositions(Person group[]) {
    printf("List of positions to be hired:\n");
    printf("Number\tRecruited\tName\n");
    for (int i = 0; i < NUM_PERSONS; i++) {
        printf("%d\t%s\t\t%s\n", group[i].id, group[i].isRecruited ? "Yes" : "No", group[i].name);
    }
}
