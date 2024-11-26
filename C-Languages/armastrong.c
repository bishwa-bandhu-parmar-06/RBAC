#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,digit,h;
    printf("enter the value of n\n");
    scanf("%d",&n);
    h=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+pow(digit,3);
        n=n/10;
    }
    if(sum==h)
    printf("no is armstrong\n");
    else
    printf("no is not armstrong\n");
    return 0;
}