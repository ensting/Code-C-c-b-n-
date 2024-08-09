#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main ()
{
   double x, ret, val;

   printf("nhap x = ");
   scanf("%lf",&x);
   val = PI / 180.0;
   ret = cos( x*val );  
   printf("Gia tri cosin cua %lf la bang %lf\n", x, ret);
   
   x = 90.0;
   val = PI / 180.0;
   ret = cos( x*val );
   printf("Gia tri cosin cua %lf la bang %lf\n", x, ret);
   
   return(0);
}
