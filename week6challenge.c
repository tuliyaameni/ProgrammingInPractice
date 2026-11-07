#include <stdio.h>

int main(void)
{
    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float target;
    float temp;
    int found = 0;

    for (int i = 0; i < 50; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("\n--- All Salaries ---\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%d: %.2f\n", i + 1, salaries[i]);
    }

    highest = salaries[0];
    lowest = salaries[0];

    for (int i = 0; i < 50; i++)
    {
        total = total + salaries[i];

        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    average = total / 50;

    printf("\n--- Salary Report ---\n");
    printf("Total salary expenditure: %.2f\n", total);
    printf("Average salary:           %.2f\n", average);
    printf("Highest salary:           %.2f\n", highest);
    printf("Lowest salary:            %.2f\n", lowest);

    printf("\nEnter a salary to search for: ");
    scanf("%f", &target);

    for (int i = 0; i < 50; i++)
    {
        if (salaries[i] == target)
        {
            printf("Salary %.2f found at position %d\n", target, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Salary %.2f was not found\n", target);
    }

    for (int i = 0; i < 49; i++)
    {
        for (int j = 0; j < 49 - i; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temp = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temp;
            }
        }
    }

    printf("\n--- Salaries Sorted (Lowest to Highest) ---\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%d: %.2f\n", i + 1, salaries[i]);
    }

    return 0;
}