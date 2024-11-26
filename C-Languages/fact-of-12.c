#include<stdio.h>
int fact(int n);
int main()
{
    int num=12,total;
    total=fact(num)/8;
    printf("factorial of given no is %d\n",total);
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

