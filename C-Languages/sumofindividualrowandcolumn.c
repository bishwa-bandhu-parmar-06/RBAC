#include<stdio.h>
int main()
{
    int a[3][3],i,j,sr=0,sc=0;
    printf("enter the value of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
for(j=0;j<3;j++)
{
    sr = sr + a[i][j];
    sc = sc + a[i][j];
}

/*for(i=1,j=1;i<3,j<3;i++,j++)
{
    sum = sum + a[i][j];
}*/
printf("sr = %d,sc=%d\n",sr,sc);
}
