#include<stdio.h>
#include<math.h>
 void nhap (int a[100], int &b){
 	do {
 		printf("nhap so phan tu = ");
 		scanf("%d",&b);
 		if (b <=0 || b>100 ) {
 			printf("so phan tu ko hop le /n");
		 }
	 }
	 while (b<=0 || b>100);
	 for (int i=1; i<=b; i++){
	 	printf("nhap a[%d] = ",i);
	 	scanf("%d",&a[i]);
	 }
 }
 void xuat(int a[100], int b){
 
    for(int i = 1; i <= b; i++)
    {
        printf("%3d", a[i]);
    }
}
 int main(){
 	int a[100],b,g;
 	nhap(a, b);	 
 	do { 
	printf("nhap top = ");
	scanf("%d",&g);
	if (g>b) { printf("nhap lai\n");}
	 }
	while (g > b);
	 for (int i=1; i<=b-1 ;i++){
	 	for (int j =i; j<=b; j++)
	 	         if (a[i]<a[j]){
	 	         	int f=a[i];
	 	         	a[i]=a[j];
	 	         	a[j]=f;
				  }
	            }
  for(int i = 1; i <= g; i++)
    {
        printf("%d\n", a[i]);
    }
     return 0;
 }
