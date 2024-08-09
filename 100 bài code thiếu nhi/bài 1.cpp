#include<stdio.h> 
#include<math.h>
int main(){
	int x,y,x1,y1;
	float r,d;
	 printf("nhap toa do tam \n ");
	 printf("nhap x = "); scanf("%d ",&x);
	 printf("nhap y = "); scanf("%d",&y);
	 printf("nhap ban kinh r = "); scanf("%d",&r);
	 printf("nhap toa do diem x  = "); scanf("%d  ",&x1);
	 printf("nhap toa do diem y = "); scanf("%d",&y1);
	 d= sqrt(pow(x1-x,2)+ pow(y1-y,2));
	 if ( d <= r ) {printf(" m nam trong hinh tron ");} else printf("M nam ngoai hinh tron ");
     return 0 ; 
    
	 
}