#include <stdio.h>

int main() {
    int choice, roll_number;
    char student_name ;
    float sub1, sub2, sub3, total, average;
    char grade;

    do {
        printf("\nStudent Grade Management System\n");
        printf("1. Enter Student Name \n");
        printf("2. Enter Roll Number\n");
        printf("3. Calculate Average Marks (out of 100)\n");
        printf("4. Display Grade\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter student name: ");
                scanf(" %s", &student_name);  
                break;

            case 2:
                printf("Enter the student's roll number: ");
                scanf("%d", &roll_number);
                break;

            case 3:
                printf("Enter marks for 3 subjects (out of 100):\n");
                printf("Subject 1: ");
                scanf("%f", &sub1);
                printf("Subject 2: ");
                scanf("%f", &sub2);
                printf("Subject 3: ");
                scanf("%f", &sub3);

                total = sub1 + sub2 + sub3 ;
                average = total / 3;

                printf("Average marks: %.2f\n", average);
                break;

            case 4:
                if (average >= 90) {
                    grade = 'A';
                } else if (average >= 70) {
                    grade = 'B';
                } else if (average >= 50) {
                    grade = 'C';
                } else {
                    grade = 'F';
                }

                printf("Grade: %c\n", grade);
                break;

            case 5:
                printf("Exiting the system.\n");
                break;

            default:
                printf("Invalid choice. Please enter again.\n");
        }
    } while (choice != 0);

    return 0;
}