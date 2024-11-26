#include<stdio.h>
#define MAX_FILE_NAME 100
int main()
{
    FILE *fp;
    int count=0;
    char filename[MAX_FILE_NAME];
    char c;
    printf("enter the file name\n");
    scanf("%s",filename);
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("could not open file %s",filename);
        return 0;
    }
    for(c=getc(fp);c!=EOF;c=getc(fp))
        if(c=='\n')
        count=count+1;
    fclose(fp);
    printf("the file %s has %d lines\n",filename,count);
    return 0;
}
