#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"

void hirePerson(Person group[]) {
    int number;
    int valid;
    char name[MAX_NAME_LENGTH];

    do{
        printf("Enter the number of the position to hire: ");
        scanf("%d", &number);
        getchar();  // Remove the newline character from the input buffer
        valid=1;

        if (number < 1 || number > NUM_PERSONS) {
            printf("Invalid position number. Please try again.\n");
            valid=0;
        }

        if (group[number - 1].isRecruited) {
            printf("This position has already been hired.\n");
            valid=0;
        }

        if(valid==0){
            continue;
        }

        printf("Enter the name of the person to hire: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  // Remove the trailing newline character

        group[number - 1].id = number;
        group[number - 1].isRecruited = 1;
        strcpy(group[number - 1].name, name);

        printf("Person hired successfully.\n");
    }while(valid==0);
}
