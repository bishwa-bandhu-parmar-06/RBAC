#include<stdio.h>
int mul(int x,int y);
void main()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
   c=mul(a,b);
}
int mul(int x,int y)
{
    int multi;
    multi=x*y;
    printf("multiplication of two no is %d\n",multi);
}

