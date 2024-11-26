#include<stdio.h>
void main()
{
    int mark[5],i,sum=0,avg;
    printf("enter the marks of five student as element of array\n");
    for(i=0;i<5;i++)
{
    scanf("%d",&mark[i]);
}
for(i=0;i<5;i++)
sum=sum+mark[i];
printf("sum of 5 students marks is :%d\n",sum);
avg=sum/5;
printf("avg of 5 students marks  is :%d\n",avg);
}