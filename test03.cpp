#include<stdio.h>
#include<math.h>
#define MAX 100
 
void nhap (int a[], int &n)
{
  //s? d?ng v�ng l?p do..while() d? y�u c?u ngu?i d�ng nh?p v�o s? ph?n t? c?a m?ng
    do
    {
        printf("\nNhap v�o so phan tu: ");
        scanf("%d", &n);
        //n?u s? ph?n t? kh�ng h?p l? th� in ra m�n h�nh
        if(n <= 0 || n > MAX)
        {
            printf("\nS? ph?n t? kh�ng h?p l?");
        }
    }while(n <= 0 || n > MAX);
    //d�ng v�ng l?p for d? nh?p c�c gi� tr? cho m?ng
    for(int i = 0; i < n; i++)
    {
        printf("\nNh?p a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
/* h�m xu?t c�c gi� tr? trong m?ng ra m�n h�nh */
void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}
int main() {
	int a[100],b;
	nhap(a, b);
	int c=0;
	c=a[0];
	for (int i=1; i<=b; i++)
	{
		if ( c < a[i]){
			c=a[i];
		}
	}
	printf("%d l� so lon nhat ",c);
		
	return 0;
}

