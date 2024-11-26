#include<stdio.h>
int fact(int n);
void main()
{
    int j,k;
    printf("enter the value of j\n");
    scanf("%d",&j);
    k=fact(j);
}
int fact(int n)
{int flag=1;
    for(int i=n;i>=1;i--)
      flag=flag*i;
   printf("factorial is %d\n",flag);
}
