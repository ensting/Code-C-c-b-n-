#include<stdio.h>
#include<math.h>
double ham(double x){
	double f= pow(x,3) -x-1;
	return f;
}
int main()
{
	double a,b;
	double c;
	printf("nhap ");
	scanf("%lf\n%lf",&a,&b);
	double h = (b-a)/0.02;
	double j= log(h)/log(2);
	
	//for (int i =0; i<= int(j);i++)
	do
	{
		c=(a+b)/2;
	 if (ham(c)*ham(a)<0) 
	 {
	 	b=c;
	 } else { a=c;}
	}
	while (fabs(ham(c)) >= 0.02);
	printf("%lf",&c);
	return 0;
}
	
	
	

