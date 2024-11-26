#include <stdio.h>
#include <stdlib.h>

struct S {
    int	  a;
    struct S *b;
};

int main(void) {
    struct S *x = malloc(sizeof(struct S));
    struct S *y = malloc(sizeof(struct S));
    struct S *p;
    x->a = 2; x->b = y;
    y->a = 4; y->b = x;
    p = x;
    p = p >b->b->b->b;

    printf("%d",p >a);
    return 0;
}
