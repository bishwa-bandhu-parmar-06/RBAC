#include<stdio.h>
int value(int *x,int *y);
int main()
{
    int a=2,b=8;
    printf("before a=%d,b=%d\n",a,b);
    value(&a,&b);
    printf("after a=%d,b=%d\n",a,b);
    return 0;
}
int value(int *x,int *y)
{
    (*x)++;
    (*y)++;
    printf("value of x=%d,y=%d\n",x,y);
}
