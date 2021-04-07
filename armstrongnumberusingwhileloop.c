#include<stdio.h>
int main()
{
    //int m=8;
int n=7;
    int i,j,k;
     for(i=1;i<=n;i++)//Outer loop
     {
           for(j=1;j<=n-i;j++)//Inner loop
         {
            // printf("i=%4d,j=%4d",i,j);
            printf(" ");
         }

         for(k=1;k<=i;k++)//Inner loop
         {
            // printf("i=%4d,j=%4d",i,j);
            printf("%d",0);
         }
         printf("\n");
         }

    return 0;
}
