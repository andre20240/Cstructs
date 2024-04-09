#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 12;
    struct Student studentsArray[arraySize];

    
    populateStudents(studentsArray, arraySize);

    // Print the structure elements
    printStudents(studentsArray, arraySize);

    return 0;
}

