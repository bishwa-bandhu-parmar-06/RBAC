#include<stdio.h>
int sum(int x,int y);
void main()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
   c=sum(a,b);
}
int sum(int x,int y)
{
    int add;
    add=x+y;
    printf("sum of two no is %d\n",add);
}
