#include<stdio.h>
int eve(int n);
void main()
{
   int i,j;
   printf("enter the value of i\n");
   scanf("%d",&i);
   j=eve(i);
}
int eve(int n)
{int i;
if(n%2==0)
printf("even");
else
printf("odd");
}
