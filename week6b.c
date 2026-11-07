#include <stdio.h>

int main(void)
{
    float budgets[10];
    float total = 0;
    float average;
    float temp;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    printf("\n--- All Budgets ---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        total = total + budgets[i];
    }

    average = total / 10;

    printf("\nTotal budget:   %.2f\n", total);
    printf("Average budget: %.2f\n", average);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\n--- Budgets Sorted (Lowest to Highest) ---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d: %.2f\n", i + 1, budgets[i]);
    }

    return 0;
}