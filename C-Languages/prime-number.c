#include<stdio.h>
int main()
{
    int num,factorial=0;
    printf("enter the value of number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            factorial++;
    }
    {
        if(factorial==2)
            printf("no is prime\n");
        else
            printf("number is not prime");

    }
    return 0;
}
