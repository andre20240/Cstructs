#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateStudents(struct Student *studentsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Registration Number: ");
        scanf("%d", &studentsArray[i].regNo);
        printf("Name: ");
        scanf("%s", studentsArray[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &studentsArray[i].gender); 
        printf("Course: ");
        scanf("%s", studentsArray[i].course); 
        printf("Year: ");
        scanf("%d", &studentsArray[i].year);
    }
}

// Function to print the structure elements
void printStudents(struct Student *studentsArray, int arraySize) {
    printf("\nStudent Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Student %d:\n", i + 1);
        printf("Registration Number: %d\n", studentsArray[i].regNo);
        printf("Name: %s\n", studentsArray[i].name);
        printf("Gender: %c\n", studentsArray[i].gender);
        printf("Course: %s\n", studentsArray[i].course);
        printf("Year: %d\n", studentsArray[i].year);
    }
}

