#include<stdio.h>
void main()
{
    int a[5],i,sum=0;
    printf("enter the element of a\n");
    for(i=0;i<5;i++)

        scanf("%d",&a[i]);

    for(i=0;i<5;i++)

        sum=sum+a[i];

    //printf("%d\n",sum);



    int b[5],add=0,j;
    printf("enter the element of b\n");
    for(j=0;j<5;j++)
        scanf("%d",&b[j]);
    for(j=0;j<5;j++)
        add=add+b[j];
        //printf("%d",add);



    int c[5],x;
   x=sum+add;
   c[5]=x;
    printf("display the third array  is %d\n",c[5]);



}
