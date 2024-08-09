#include <stdio.h>
#include <conio.h>
int main() {
  int a; 
  printf("nhap = ");
  scanf("%d",&a);
  if (a>0 && a<13) {
 	 switch (a)
 	 {
 	 	case 1:
 	 	case 2: 
 	 	case 3: printf(" quy 1 ");
 	 	        break;
 	 	case 4:
 	 	case 5:
 	 	case 6: printf ("quy 2 ");
 	 	        break;
		  	  }
     }

 }
