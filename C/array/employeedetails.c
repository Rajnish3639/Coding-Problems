#include <stdio.h>

// Define structure for Employee
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    // Declare and initialize structure variable
    struct Employee emp = {"John", 25, 5000.50};

    // Display Employee details
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
