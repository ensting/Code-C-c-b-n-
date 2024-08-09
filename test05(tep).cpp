#include <stdio.h>
int main()
{

int num;

FILE *fptr;

// use appropriate location if you are using MacOS or Linux

fptr = fopen("D:\\tep.txt","w");  

if(fptr == NULL)

{

printf("Error!");

}

printf("Enter num: "); 

scanf("%d",&num);

fprintf(fptr,"%d",num);

fclose(fptr);

return 0;

}

