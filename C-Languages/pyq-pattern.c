/*write a program in c using nesting of loop FOR A GIVEN PATTERN
AAAA
AAAA
AAAA
AAAA
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
        {
        for(int j=1;j<=4;j++)
            {
        printf("A");
            }
        printf(" \n");
        }
        return 0;
}
