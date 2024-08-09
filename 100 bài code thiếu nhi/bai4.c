#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\t GIAI PHUONG TRINH BAC 2 (ax^2 + bx +c =0)  \n");
    printf("nhap a= ");
    scanf("%d ", &a);
    printf("nhap b= ");
    scanf("%d ", &b);
    printf("nhap c= ");
    scanf("%d ", &c);
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("phtr vo nghiem ");
    }
    else if (delta == 0)
    {
        printf(" ptr chi co 1 nghiem = %d", ((-b) / 2 * a));
    }
    else
    {
        printf("ptr co 2 nghiem \n");
        printf("x1 = %lf \n", (((-b) + sqrt(delta)) / (2 * a)));
        printf("x2 = %lf", (((-b) - sqrt(delta)) / (2 * a)));
    }
    return 0;
}