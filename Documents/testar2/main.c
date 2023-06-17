#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"
#include "rlutil.h"

Person Group[NUM_PERSONS];
#define waitkey anykey("Press any key to continue...\n")

int main() {
    for (int i = 0; i < NUM_PERSONS; i++) {
        Group[i].id = (i + 1);
    }

    int choice;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                cls();
                showPositions(Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 2:
                cls();
                exportList("positions.txt", Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 3:
                cls();
                importList("positions.txt", Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 4:
                cls();
                showHiredPositionsSortedById(Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 5:
                cls();
                showHiredPositionsSortedByName(Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 6:
                cls();
                hirePerson(Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 7:
                cls();
                firePerson(Group);
                printf("==========================\n");
                waitkey;
                cls();
                break;
            case 0:
                cls();
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
