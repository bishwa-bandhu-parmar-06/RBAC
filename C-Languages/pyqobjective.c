#include<stdio.h>
void main()
{
int a;
a=1;
while(a<=1)
if(a%2)
printf("%d",a++);
else
printf("%d\n",++a);
printf("%d\n",a+10);
}