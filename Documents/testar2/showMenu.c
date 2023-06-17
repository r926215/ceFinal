#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myheader.h"
#include "rlutil2.h"

void showMenu() {
    //cls(); // Clear the console

    printf("========== Menu ==========\n");
    printf("1. Show Positions\n");
    printf("2. Export List\n");
    printf("3. Import List\n");
    printf("4. Show Hired Positions (Sorted by ID)\n");
    printf("5. Show Hired Positions (Sorted by Name)\n");
    printf("6. Hire Person\n");
    printf("7. Fire Person\n");
    printf("0. Exit\n");
    printf("==========================\n");
    printf("Enter your choice: ");
}
