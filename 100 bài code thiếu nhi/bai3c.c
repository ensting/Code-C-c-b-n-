#include <stdio.h>
#include <malloc.h>

int main()
{
    printf("Size: ");
    int n,s,dem;
    s=0;
    scanf("%d", &n);
    int *p = (int *)malloc(sizeof(int) * n); // cấp cho biến trỏ  p n ô nhớ lần số nguyên (biến p sẽ có n lần ô nhớ)
    // p=&a;
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++)
    {    
        if (*(p+i)%2 == 0) {
            s=s+*(p+i);
            dem ++;
        }
        // printf("Print element: %d\n", *(p + i));
    }
    printf("%d",s/dem);
    
    return 0;
}