#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    char email[100];
    char phone[20];
    char town[50];
    char search[100];
    char backup[100];
    char description[300];
    char supplier1[] = "ABC Office Supplies";
    char supplier2[] = "Namibia Stationery";

    /* Task 1: Basic supplier details */
    printf("Enter supplier name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';

    printf("\n--- SUPPLIER DETAILS ---\n");
    printf("Name : %s\n", name);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    /* Task 2: String length */
    printf("\nSupplier name length: %d\n", (int)strlen(name));
    printf("Email length: %d\n", (int)strlen(email));
    printf("Town length: %d\n", (int)strlen(town));

    /* Task 3: Supplier search */
    printf("\nEnter supplier name to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    if (strcmp(search, supplier1) == 0 || strcmp(search, supplier2) == 0)
    {
        printf("Supplier found.\n");
    }
    else
    {
        printf("Supplier not found.\n");
    }

    /* Task 4: Copying supplier information */
    strcpy(backup, name);
    printf("\nOriginal: %s\n", name);
    printf("Backup:   %s\n", backup);

    /* Task 5: Construct a supplier description */
    strcpy(description, name);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");
    printf("\n%s\n", description);

    return 0;
}