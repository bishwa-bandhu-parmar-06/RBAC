#include<stdio.h>
int value(int x,int y);
int main()
{
    int a=2;
    int b=8;
    printf("before a=%d,b=%d",a,b);
    value(a,b);
    printf("after a=%d,b=%d",a,b);
    return 0;
}
int value(x,y)
{
    x++;
    y++;
    printf("x=%d,y=%d",x,y);
}
