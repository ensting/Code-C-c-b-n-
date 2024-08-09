#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n,n1,x1;
    char x; 
    x=' ';
    printf("nhap n (n>0)= ");
     scanf("%d",&n);
    while ( n < 0 ){
        printf ("nhap lai n = "); 
        scanf("%d",&n);
    }
    while ( n !=0 ) { 
        n1=n; 
        //printf("%d ", n1 %10 );
        x1=n1%10;
        x = (char)n1%10+x; 
        n=n1/10;
        
    }
    printf("%s ", x);

} 
