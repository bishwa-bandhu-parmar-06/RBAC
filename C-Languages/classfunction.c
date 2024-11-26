//a^n=a*a*a*a*a*a*a..................
#include<stdio.h>
int fact(int a,int b)
{int n;
    if(n==0)
        return (1);
    else
        return(a*fact(a,n-1));
}
void main()
{
    int x,y,z;
    printf("enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    z=fact(x,y);
    printf("%d",z);
}
