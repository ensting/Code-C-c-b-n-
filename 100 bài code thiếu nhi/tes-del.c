#include <stdio.h>
int main()
{
    int dest[23] = {160, 152, 136, 190, 203, 201, 237, 220, 152, 158, 205, 210, 163, 143, 146, 148, 219, 243, 154, 66, 66, 158};
    int a[25];
    a[0] = 77;
    for (int i = 1; i <= 23; i++)
    {
        for (int j = 33; j <= 126; j++)
        {
            a[i] = j;

            if (i == 1)
            {
                if (a[0] + a[i] == dest[0])
                {
                    printf("%d-", j);
                    break;
                }
            }
            else if (a[i - 1] + a[i] == dest[i - 1])
            {
                printf("%d-", j);
                break;
            }
        }
    }
   
    return 0;
}