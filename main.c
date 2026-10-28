

#include <stdio.h>

int main(void)
{
  char municipality[50];
  char mayor[50];
  int population;

  printf("Municipal Financial Management System\n");
  printf("Welcome to Windhoek Municipality\n");

  printf("Enter Municipality Name: ");
   scanf(" %49[^\n]", municipality);

    printf("Enter Mayor's Name: ");
    scanf(" %49[^\n]", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n===== MUNICIPALITY REPORT =====\n");
    printf("Municipality: %s\n", municipality);
    printf("Mayor:        %s\n", mayor);
    printf("Population:   %d\n", population);
    printf("===============================\n");

return 0;

}