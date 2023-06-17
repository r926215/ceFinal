#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED

#define MAX_NAME_LENGTH 80
#define NUM_PERSONS 10

typedef struct {
    int id;
    int isRecruited;
    char name[MAX_NAME_LENGTH];
} Person;

void showMenu();
void showPositions(Person group[]);
void exportList(const char* filename, Person group[]);
void importList(const char* filename, Person group[]);
void showHiredPositionsSortedById(Person group[]);
void showHiredPositionsSortedByName(Person group[]);
void hirePerson(Person group[]);
void firePerson(Person group[]);

#endif // MYHEADER_H_INCLUDED
