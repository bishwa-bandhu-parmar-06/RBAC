#include<stdio.h>
int main()
{
    int a,b,hcf;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
hcf=b/a;
else
hcf=a/b;
printf("hcf is %d\n",hcf);
return 0;
}