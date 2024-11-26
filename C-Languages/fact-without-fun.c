#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=n;n>=1;i--)
    {fact=n*fact;
    n=n-1;

  //  printf("factorial of given no is %d",fact);
    }
    printf("factorial of given no is %d",fact);
    return 0;
}
