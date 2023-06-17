#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void exportList(const char* filename, Person group[]){
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return;
    }

    fprintf(file, "List of positions to be hired:\n");
    fprintf(file, "Number\tRecruited\tName\n");
    for (int i = 0; i < NUM_PERSONS; i++) {
        fprintf(file, "%d\t%s\t\t%s\n", group[i].id, group[i].isRecruited ? "Yes" : "No", group[i].name);
    }

    fclose(file);
    printf("Results exported to %s successfully.\n", filename);
}
