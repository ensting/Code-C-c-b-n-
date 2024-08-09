#include<stdio.h>
int main (){
    int a[100];
    int n;
    printf("nhap n ");
    scanf("%d",&n);
    for( int i=0 ; i <n ; i++){
        printf("nhap a [%d]", i  );
        scanf("%d",&a[i]);
    }
    return 0 ;
}