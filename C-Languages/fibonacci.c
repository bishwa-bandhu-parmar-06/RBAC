#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,t3;
    printf("enter the no of term of fibonacci series\n");
   scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    t3=t1+t2;
    printf("%d\n",t2);
    t1=t2;
    t2=t3;
}
return 0;
}