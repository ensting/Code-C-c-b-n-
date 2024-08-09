/*tinh sinx*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int giaithua(int n)
{
    int t=1;
    for(int i=1;i<=n;i++) t=t*i;
    return t;
}
int main()
{
    float ts,ms,x,b,s=0;
    float a=0.000001;
    printf("nhap x: ");scanf("%f",&x);
    ts=x;
    int i=1,t=1;
    do
    { 
        ms=giaithua(i);
        b=ts/ms;
        s=s+b*t;
        ts=ts*pow(x,2);
        i=i+2;
        t=(-1)*t;
    }while(b>=a);
    printf("sin%f = %f",x,s);    
    getch();
    return 0;
}


