#include<stdio.h>
int main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=&a;
    q=&b;
    printf("value of a=%d",a);
    printf("\na=%d\n",*p);
    printf("value of a = %d\n",p);
    printf("address of a=%u\n",&a);
    printf("address of a =%u\n",p);
        printf("address of a =%u\n",&p);
}