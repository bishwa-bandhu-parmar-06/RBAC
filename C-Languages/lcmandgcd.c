#include<stdio.h>
int main()
{
    int n1,n2,a,b,hcf,temp,lcm;
    printf("enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    if(n2>n1)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    a=n1;
    b=n2;
    while(n2!=0)
    {
    temp=n1%n2;
    n1=n2;
    n2=temp;
    }
    hcf=n1;
    printf("hcf is %d\n",hcf);
    lcm=(a*b)/hcf;
     printf("lcm is %d\n",lcm);
    return 0;
}