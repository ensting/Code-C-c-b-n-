#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap so tien = ");
	scanf("%d",&n);
	for (int i=0;i<=15;i++)
	 for (int j=0; j<=30;j++)
	  for (int h=0;h<=60;h++)
	   for (int g=0;g<=150;g++)
	    for (int t=0;t<= 300; t++)
	     if (i*20+j*10+h*5+g*2+t*1 == n) 
	        printf( "%d to 20k , %d to 10k, %d to 5k, %d to 2k, %d to 1k \n",i,j,h,g,t);
	
	return 0;        
}
