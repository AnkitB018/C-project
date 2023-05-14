#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[100];
    double salary;
    char jobTitle[100];
};

void printEmployee(struct Employee employee) {
    printf("Employee ID: %d\n", employee.id);
    printf("Name: %s\n", employee.name);
    printf("Salary: %.2f\n", employee.salary);
    printf("Job Title: %s\n", employee.jobTitle);
}

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
    
    struct Employee *employees = malloc(numEmployees * sizeof(struct Employee));
    
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i+1);
        
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        
        printf("Enter Name: ");
        scanf(" %[^\n]s", employees[i].name);
        
        printf("Enter Salary: ");
        scanf("%lf", &employees[i].salary);
        
        printf("Enter Job Title: ");
        scanf(" %[^\n]s", employees[i].jobTitle);
    }
    
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i+1);
        printEmployee(employees[i]);
    }
    
    free(employees);
    
    return 0;
}
