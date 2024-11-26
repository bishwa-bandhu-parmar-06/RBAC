#include<stdio.h>
int mul(int x,int y);
void main()
{
    int a,b,m;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    m=mul(a,b);
    printf("multiplication of %d and %d given no is %d\n",a,b,m);
}
int mul(int x,int y)
{
    int z;
    z=x*y;
    return z;
}

