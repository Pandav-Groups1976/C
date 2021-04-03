#include<stdio.h>
int main()
{
    int n=273;
    int rem;
    int cubesum=0;
    while(n!=0)
    {
    rem =n % 10;
    cubesum=cubesum+ rem*rem *rem;
    n=n/10;

    }
    printf("Cube sum=%d\n",cubesum);
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
