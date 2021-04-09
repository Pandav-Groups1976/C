#include<stdio.h>
int main()
{
    int n=6;
    int i,j;

    for(i=n;i>=1;i--)
    {

        for(j=1;j<=n;j++)
        {
            if(i==j) //|| j==1 || i==n || j==n || i==j || i+j==n+1)
        printf("0");
        else
            printf(" ");
        }

         for(j=1;j<=n;j++)
        {
            if(i+j==n+1) //|| j==1 || i==n || j==n || i==j || i+j==n+1)
        printf("0");
        else
            printf(" ");
        }

        printf("\n");
    }


    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(i==j) //|| j==1 || i==n || j==n || i==j || i+j==n+1)
        printf("0");
        else
            printf(" ");
        }

         for(j=1;j<=n;j++)
        {
            if(i+j==n+1) //|| j==1 || i==n || j==n || i==j || i+j==n+1)
        printf("0");
        else
            printf(" ");
        }

        printf("\n");
    }
    //printf("\n");
    return 0;
}
