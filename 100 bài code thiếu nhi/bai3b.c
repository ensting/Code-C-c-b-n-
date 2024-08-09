#include <stdio.h>
#include <malloc.h>
int main()
{
    int *array;
    array = (int *)malloc(100 * sizeof(int));
    for (int i = 0; i <= 10; i++)
    {
        printf("nhap array[%d]= ", i);
        scanf("%d", *(array + i));
    }
    return 0;
}