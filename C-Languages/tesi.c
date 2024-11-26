#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *t = (int *) malloc(sizeof(int) + sizeof(int));
    t++;
    *t = 8;
    t[ 1] = *t / 2;
    t--;
    t[1] = *t / 2;

    printf("%d\n", *t);
    free(t);
    return 0;
}

