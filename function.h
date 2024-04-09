#ifndef FUNCTION_H
#define FUNCTION_H

struct Student {
    int regNo;
    char name[100];
    char gender;
    char course[50];
    int year;
};

void populateStudents(struct Student *studentsArray, int arraySize);
void printStudents(struct Student *studentsArray, int arraySize);

#endif

