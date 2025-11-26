#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    char name[50];
    int roll_no;
    char address[100];
    int marks;
};

int num_students = 0;
struct student *students[MAX_STUDENTS];

void insert_student() {
    if (num_students >= MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }

    struct student *s = (struct student *) malloc(sizeof(struct student));

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll no: ");
    scanf("%d", &s->roll_no);

    printf("Enter address: ");
    scanf("%s", s->address);

    printf("Enter marks: ");
    scanf("%d", &s->marks);

    students[num_students++] = s;

    printf("Student record inserted.\n");
}

void delete_student() {
    int roll_no;
    printf("Enter roll no of student to delete: ");
    scanf("%d", &roll_no);

    int i, found = 0;
    for (i = 0; i < num_students; i++) {
        if (students[i]->roll_no == roll_no) {
            found = 1;
            free(students[i]);
            students[i] = students[--num_students];
            break;
        }
    }

    if (found) {
        printf("Student record deleted.\n");
    } else {
        printf("Student record not found.\n");
    }
}

void print_student(struct student *s) {
    printf("Name: %s\n", s->name);
    printf("Roll no: %d\n", s->roll_no);
    printf("Address: %s\n", s->address);
    printf("Marks: %d\n", s->marks);
}

void print_all_students() {
    if (num_students == 0) {
        printf("No students to print.\n");
        return;
    }

    int i;
    for (i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        print_student(students[i]);
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("Enter 1 to insert a student record.\n");
        printf("Enter 2 to delete a student record.\n");
        printf("Enter 3 to print all student records.\n");
        printf("Enter 4 to exit.\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_student();
                break;
            case 2:
                delete_student();
                break;
            case 3:
                print_all_students();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}
