#include<stdio.h>
#include<math.h>
 void nhap (int a[100], int &n){
 	do {
	printf("nhap so phan tu = ");
 	scanf("%d \n",&n);
 	if ( n<=0 && n>100){
 		printf("nhap lai \n ");
	 }
     }
 	 while ( n <=0 || n >100);
 	for (int i=1; i<=n; i++){
 		printf("a[%d] = ", i);
 		scanf("%d\n",&a[i]);
	 }
 }
 int main (){
 	int a[100],b;
 	nhap(a, b);
 	int c= a[1];
 	for (int i=1 ; i<=b; i++){
 		if (c < a[i]) {
 			c=a[i];
		 }
	 }
	 printf(" %d la so lon nhat", c);
	 return 0;
}
