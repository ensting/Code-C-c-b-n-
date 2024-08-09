#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("MENU\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Your Option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You choose 1\n");
                // Thực hiện công việc tương ứng với Option 1
                break;
            case 2:
                printf("You choose 2\n");
                // Thực hiện công việc tương ứng với Option 2
                break;
            case 3:
                printf("You choose 3\n");
                // Thực hiện công việc tương ứng với Option 3
                break;
            case 4:
                printf("Bye bye.\n");
                return 0;
            default:
                printf("Option not found. Please choose other.\n");
        }
    }

    return 0;
}