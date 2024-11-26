#include<stdio.h>
int sub(int x,int y);
void main()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
   c=sub(a,b);
}
int sub(int x,int y)
{
    int subs;
    subs=x-y;
    printf("sub of two no is %d\n",subs);
}
