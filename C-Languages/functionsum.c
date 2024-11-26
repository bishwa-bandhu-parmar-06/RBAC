#include<stdio.h>
int sum(int x,int y);//function declaration
void main()
{
    int a,b,s;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    s=sum(a,b);//function call
    printf("sum of a and b is %d\n",s);
}
int sum(int x,int y)//function definition
{
    int z;
    z=x+y;
    return z;
}
