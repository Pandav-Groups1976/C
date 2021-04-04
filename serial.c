#include<stdio.h>
int main()
{
    int a=123,rem,sum=0;
   while(a!=0)
   {
       rem = a%10;
       sum=sum*10 + rem;

       a=a/10;
       //printf("%d,",rem);

   }
   printf("%d",sum);
    return 0;
}
