#include<stdio.h>
int sum_old(int n){
    if (n == 1) {
    n += 1;
    return n; }
    else if (n % 2 != 0) 
    n + sum_old(n-1);
    else sum_old(n-1);
}
int main(){
    int a ;
    scanf("%d",&a);
    int b = sum_old(a);
    printf("%d",b);

}
