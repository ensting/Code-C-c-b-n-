/*im nghiem cua ptrnh x.2^x=1*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    float a;
    a=pow(x,3)-x-1;
    return a;
}
int main()
{
    float a,b,c,d;
    printf("nhap gia tri cua a : ");scanf("%f",&a);
    printf("nhap gia tri cua b : ");scanf("%f",&b);
    if(f(a)*f(b)>0)
    printf("phuong trinh khong co nghiem trong khoang (%.0f,%.0f)",a,b);
    else
    {
    do
    {
        c=(a+b)/2;
        if(f(c)*f(a)>0)
        a=c;
        else
        b=c;
        d=b-a;
    } while(d>=0.02);
    printf("nghiem cua phuong trinh la: %f",c);
    }
    return 0;
}

