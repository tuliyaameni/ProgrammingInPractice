#include <stdio.h>

int main(void)
{
    double basicSalary;
    double housing;
    double transport;
    double tax;
    double grossSalary;
    double netSalary;

    printf("EMPLOYEE SALARY CALCULATOR\n");
    printf("--------------------------\n");

    printf("Enter basic salary: ");
    scanf("%lf", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%lf", &housing);

    printf("Enter transport allowance: ");
    scanf("%lf", &transport);

    printf("Enter tax: ");
    scanf("%lf", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary:   %.2f\n", netSalary);

    return 0;
}