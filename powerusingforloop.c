#include<stdio.h>
int main()
{
    int x,y,i,pow=1;
    printf("Enter the number");
    scanf("%d",&x);
    printf("Enter the power");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
    pow=pow*x;
    }
    printf("%d",pow);
    return 0;

}
