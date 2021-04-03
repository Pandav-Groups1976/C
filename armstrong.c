#include<stdio.h>
int main()
{
    int n,i,limit;
    int rem;
    int cubesum;
    int copy;
    printf("Enter the number");
    scanf("%d",&limit);
    for(i=0;i<=limit;i++)
    {

    n=i;
cubesum=0;
      while(n!=0)
      {
           rem =n % 10;
    cubesum=cubesum+ rem*rem *rem;
    n=n/10;
      }
      if(cubesum==i)

      printf("%d,",i);
    }
    return 0;

    /*
    1. Initialize n=273
   2. Repeat till n becomes zero which means till n!=0
    3. Get rem= n % 10
    4. Print rem
    5 set n=n/10
    6. goto step 2

    */
}
