#include <stdio.h>
#include <string.h>

#define MAX_NAME 100;

struct student {
    char name[MAX_NAME];
    int zid;
    int ass1;
};

struct student *createStudent(char name[MAX_NAME], int zid, int ass1) {
    
    struct student *newStudent = malloc(sizeof(struct student));
    strcpy(newStudent->name, name);
    newStudent->zid = zid;
    newStudent->ass1 = ass1;
    
    return newStudent;
}

int main(void) {

    struct student harrison;

    harrison.zid = 5214808;
    harrison.ass1 = 99;
    strcpy(harrison.name, "Harrison");

    return 0;
}
