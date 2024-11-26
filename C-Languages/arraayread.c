#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter the five array element\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("array at index %d is :-  %d\n",i,a[i]);
    }
}