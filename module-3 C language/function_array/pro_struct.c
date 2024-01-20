//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address
//andage
//b. Write a program of structure for five employee that
//provides the following information -print and display
//empno, empname, address andage

#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    
    int i;
    struct Employee employee1;
    
    printf("Enter Employee Number: ");
    scanf("%d", &employee1.empno);
    printf("Enter Employee Name: ");
    scanf("%s", employee1.empname);
    printf("Enter Address: ");
    scanf("%s", employee1.address);
    printf("Enter Age: ");
    scanf("%d", &employee1.age);

    printf("\nInformation for Employee 1:\n");
    displayEmployee(employee1);

    struct Employee employees[5];
    
    for (i = 0; i < 5; i++) {
        printf("\nEnter information for Employee %d:\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Enter Address: ");
        scanf("%s", employees[i].address);
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nInformation for all Employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(employees[i]);
    }

    return 0;
}

