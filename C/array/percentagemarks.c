#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks[5];
};

int main() {
    int i;
    float total = 0, percentage;
    struct Student s;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter student roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter marks of 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    percentage = (total / 500) * 100;

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
