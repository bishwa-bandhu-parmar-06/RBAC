#include<stdio.h>
int pm(int n);
void main()
{
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    y=pm(x);
}
int pm(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {if(n%i==0)
        fact++;
    }
    if(fact==2)
        printf("number is prime\n");
    else
        printf("number is not prime\n");
}
