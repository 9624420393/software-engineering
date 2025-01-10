//Write a C program that defines a structure to store a student's details (name,roll number, and marks). Use an array of structures to store details of 3
//students and print them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// student structure
struct Student {
    char* name;
    int roll_number;
    double total_marks;
};

int main() {
    struct Student students[3];
      int n = sizeof(students)/sizeof(struct Student);
      
    students[0].roll_number = 01;
    students[0].name = "vrunda";
    students[0].total_marks = 56.84;

    students[1].roll_number = 02;
    students[1].name = "Arth";
    students[1].total_marks = 87.94;

    students[2].roll_number = 03;
    students[2].name = "Sneh";
    students[2].total_marks = 89.78;

    printf("========================================\n");
    printf("           Student Records              \n");
    printf("========================================\n");
    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("  Name        : %s\n", students[i].name);
        printf("  Roll Number : %d\n", students[i].roll_number);
    
        printf("  Total Marks : %.2f\n", students[i].total_marks);
    }
    
    printf("========================================\n");

    return 0;
}
