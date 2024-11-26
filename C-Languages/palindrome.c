#include<stdio.h>
int main()
{
    int n,digit,reverse=0,h;
    printf("eneter the value of n\n");
    scanf("%d",&n);
    h=n;
    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }printf("reverse is %d\n",reverse);
    if(h==reverse)
printf("number is palindrome");
else
printf("number is not palindrome");
    return 0;
}