#include<stdio.h>
int GCD(int m,int n)
{
    if(m==0)
        return n;
    else if(n==0)
        return m;
    else
        return (GCD(n%m,m));
}
void main()
{
    int a,b,gcd;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    gcd=GCD(a,b);
}
