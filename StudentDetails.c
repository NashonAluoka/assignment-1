#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define NUM_STUDENTS 3
#define NUM_COURSES 2

// Structure to store student information
struct Student {
    char name[MAX_LEN];
    char regNumber[MAX_LEN];
    char courses[NUM_COURSES][MAX_LEN];
};

// Function to display student details
void displayStudentDetails(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Registration Number: %s\n", student.regNumber);
    for (int j = 0; j < NUM_COURSES; j++) {
        printf("Course %d: %s\n", j + 1, student.courses[j]);
    }
    printf("\n");
}

int main() {
    struct Student students[NUM_STUDENTS];

    // Request details for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline

        printf("Registration Number: ");
        fgets(students[i].regNumber, sizeof(students[i].regNumber), stdin);
        students[i].regNumber[strcspn(students[i].regNumber, "\n")] = '\0'; // Remove newline

        for (int j = 0; j < NUM_COURSES; j++) {
            printf("Course %d: ", j + 1);
            fgets(students[i].courses[j], sizeof(students[i].courses[j]), stdin);
            students[i].courses[j][strcspn(students[i].courses[j], "\n")] = '\0'; // Remove newline
        }
    }

    // Display all student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        displayStudentDetails(students[i]);
    }

    // Allow editing details of one student
    int student_index_to_edit;
    printf("Enter the index (1 to %d) of the student whose details you want to edit: ", NUM_STUDENTS);
    scanf("%d", &student_index_to_edit);
    fflush(stdin); // Clear input buffer

    if (student_index_to_edit >= 1 && student_index_to_edit <= NUM_STUDENTS) {
        student_index_to_edit--; // Convert to zero-based index

        printf("Enter updated details for Student %d:\n", student_index_to_edit + 1);

        printf("Name: ");
        fgets(students[student_index_to_edit].name, sizeof(students[student_index_to_edit].name), stdin);
        students[student_index_to_edit].name[strcspn(students[student_index_to_edit].name, "\n")] = '\0'; // Remove newline

        printf("Registration Number: ");
        fgets(students[student_index_to_edit].regNumber, sizeof(students[student_index_to_edit].regNumber), stdin);
        students[student_index_to_edit].regNumber[strcspn(students[student_index_to_edit].regNumber, "\n")] = '\0'; // Remove newline

        for (int j = 0; j < NUM_COURSES; j++) {
            printf("Course %d: ", j + 1);
            fgets(students[student_index_to_edit].courses[j], sizeof(students[student_index_to_edit].courses[j]), stdin);
            students[student_index_to_edit].courses[j][strcspn(students[student_index_to_edit].courses[j], "\n")] = '\0'; // Remove newline
        }

        printf("Details updated successfully.\n");

        // Display updated student details
        printf("\nUpdated Student Details:\n");
        displayStudentDetails(students[student_index_to_edit]);
    } else {
        printf("Invalid student index.\n");
    }


    return 0;
}
