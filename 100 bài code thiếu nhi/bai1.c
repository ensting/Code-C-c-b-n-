#include <stdio.h>
int main()
{
    for (int j = 1; j < 10; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if (j == 9)
            {
                printf("*");
            }
            else if (i == 1)
            {
                printf("*");
            }
            else if (i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" \n");
    }
    return 0;
}