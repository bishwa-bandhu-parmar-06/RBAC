#include<stdio.h>
int tab(int n);
void main()
{
    int j,k;
    printf("enter the value of j\n");
    scanf("%d",&j);
  k=tab(j);

}
int tab(int n)
{
   for(int i=1;i<=10;i++)
   printf("%d\n",n*i);
}
