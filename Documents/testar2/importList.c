#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void importList(const char* filename, Person group[]) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", filename);
        return;
    }

    // Skip the header lines
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    fgets(buffer, sizeof(buffer), file);

    // Read data for each person
    int i = 0;
    while (fgets(buffer, sizeof(buffer), file) != NULL && i < NUM_PERSONS) {
        sscanf(buffer, "%d\t%s\t\t%s", &group[i].id, buffer, group[i].name);
        group[i].isRecruited = (strcmp(buffer, "Yes") == 0) ? 1 : 0;
        i++;
    }

    fclose(file);
    printf("Data imported from %s successfully.\n", filename);
}
