#include<stdio.h>
#include<math.h>
#define MAX 100
 
void nhap (int a[], int &n)
{
  //s? d?ng vòng l?p do..while() d? yêu c?u ngu?i dùng nh?p vào s? ph?n t? c?a m?ng
    do
    {
        printf("\nNhap vào so phan tu: ");
        scanf("%d", &n);
        //n?u s? ph?n t? không h?p l? thì in ra màn hình
        if(n <= 0 || n > MAX)
        {
            printf("\nS? ph?n t? không h?p l?");
        }
    }while(n <= 0 || n > MAX);
    //dùng vòng l?p for d? nh?p các giá tr? cho m?ng
    for(int i = 0; i < n; i++)
    {
        printf("\nNh?p a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
/* hàm xu?t các giá tr? trong m?ng ra màn hình */
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
	printf("%d là so lon nhat ",c);
		
	return 0;
}

