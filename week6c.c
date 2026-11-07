#include <stdio.h>
#include <string.h>

int main(void)
{
    char registrations[20][20];
    char target[20];
    int found = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    printf("\n--- All Registration Numbers ---\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d: %s\n", i + 1, registrations[i]);
    }

    printf("\nEnter a registration number to search for: ");
    scanf("%19s", target);

    for (int i = 0; i < 20; i++)
    {
        if (strcmp(registrations[i], target) == 0)
        {
            printf("Registration %s found at position %d\n", target, i + 1);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Registration %s was not found\n", target);
    }

    return 0;
}