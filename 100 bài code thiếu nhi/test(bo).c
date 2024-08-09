#include<stdio.h>
int main (){
    int a=77;
    for (int i =32 ; i<=126;i++ ){
        for (int j = 32 ; j<= 126 ; j++){
            if ( a + i == 160 ){
                if ( i + j == 152){
                printf(" %d-",i);
                printf("%d",j);
            }
        }
    }
   
       
}