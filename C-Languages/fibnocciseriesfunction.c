//fibonacci series with function
#include<stdio.h>
int fib(int n);
void main()
{
    int term;
    printf("enter the term\n");
    scanf("%d",&term);
    for(int i=1;i<=term;i++)
        printf("%d\n",fib(i));
    printf("\n");
}
int fib(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
