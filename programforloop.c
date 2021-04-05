#include<stdio.h>
int main()
{
 int a,b=13,c=21,i,num=9;
 printf("%d,%d,",c,b);

     a=c-b;
     while(a!=0)
     {


     printf("%d,",a);
     c=b;
     b=a;
     a=c-b;
     }
     printf("%d,",0);

 //printf("a=%d,b=%d,c=%d,i=%d",a,b,c,i);
 return 0;

}
