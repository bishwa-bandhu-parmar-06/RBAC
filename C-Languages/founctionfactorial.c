//factorial of any number
#include<stdio.h>
int fact(int a);
void main()
{
    int n,x;
    printf("enter the value of n\n");
    scanf("%d",&n);
    x =  fact(n);
    printf("%d",x);
}
int fact(int a)
{
    int f;
    if(f==1)
        return 1;
    else
        f =a*fact(a-1);
    return f;
}
