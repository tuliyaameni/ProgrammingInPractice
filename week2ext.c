#include <stdio.h>

int main () {

int departments;
double payroll;
double procurement;
double assets;

printf("Enter departments number: ");
scanf("%d", &departments);

printf("Enter payroll amount: ");
scanf("%lf" , &payroll);

printf("Enter procurement number: ");
scanf("%lf" , &procurement);

printf("Enter assets amount : ");
scanf("%lf" , &assets);

printf("Municipal Financial Summary\n");
printf("-------------------------------------\n");
printf("Departments:   %d\n" , departments);
printf("Payroll:      %.2f\n" , payroll);
printf("Procurement: %.2f\n" , procurement);
printf("Assets: %.2f\n" , assets);

return 0;
}

