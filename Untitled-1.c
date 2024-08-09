#include<stdio.h>
#include<math.h>
int main(){
    int n,n1;
    printf("nhap n (n>0)= ");
     scanf("%d",&n);
    while ( n < 0 ){
        printf ("nhap lai n = "); 
        scanf("%d",&n);
    }
    while ( n !=0 ) { 
        n1=n; 
        printf("%d /n ", n1 %10 );
        n=n1/10;
        
    }

} 