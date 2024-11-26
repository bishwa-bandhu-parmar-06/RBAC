#include<stdio.h>
int fact(int n);
int main()
{
    int num;
    printf("enter the value of num\n");
    scanf("%d",&num);
    printf("factorial of given no is %d\n",fact(num));
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
