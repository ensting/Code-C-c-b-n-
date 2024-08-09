#include<stdio.h>
void menu()
{
    int a;
    printf("MENU \n");
    printf("1. Option1 \n");
    printf("2. Option2 \n");
    printf("3. Option3 \n");
    printf("4. Exit \n");
    printf("Your option: ");
    scanf("%d \n", &a);
    switch (a)
    {
    case 1:
        printf("You choose 1 \n");
        menu();
        break;
    case 2:
        printf("You choose 2 \n");
        menu();
        break;
    case 3:
        printf("You choose 3 \n ");
        menu();
        break;
    case 4:
        printf("You choose 4 \n");
        printf("bye");
        break;
    }
}
int main()
{
    menu();
    return 0;
}