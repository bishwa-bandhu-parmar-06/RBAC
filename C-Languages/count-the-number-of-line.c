#include <stdio.h>
#define MAX_FILE_NAME 100

int main() {
    FILE *fp;
    int count = 0;
    char filename[MAX_FILE_NAME];
    char c;

    printf("Enter the file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 0;
    }

    while ((c = getc(fp)) != EOF) {
        if (c == '\n')
            count++;
    }

    fclose(fp);

    printf("The file %s has %d lines\n", filename, count);
    return 0;
}

