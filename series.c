#include<stdio.h>
int main()
{
    int n=4;
    int i,j,k;
     for(i=n;i>=1;i--)
     {
           for(j=1;j<=n-i;j++)
         {
                        printf(" ");
         }


         for(k=1;k<=2*i-1;k++)
         {

            printf("%d",k);
         }
         printf("\n");
         }

    return 0;
}
