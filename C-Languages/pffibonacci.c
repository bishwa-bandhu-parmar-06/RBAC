#include<stdio.h>
int main()
{
    int num;
    printf("enter the term you want to print for a fibonacci\n");
    scanf("%d",&num);
    printf("Fibonacci sequence: ");
    fibonacci(num);
    return 0;
}
    void fibonacci(int n)
    {
        int i;
        for( i=0;i<n;i++)
        {
            printf("%d",fibonacciterm(i));

        }
    }
    int fibonacciterm(int x)
    {
        if(x<=1)
            return x;
        return  fibonacciterm(x-1)    +  fibonacciterm(x-2);
    }

