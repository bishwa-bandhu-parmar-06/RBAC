#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void CreateNode(int A[], int n)
{
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void RecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d   ", p->data);
        RecursiveDisplay(p->next);
    }
}

int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9};
    CreateNode(A, 8);
    RecursiveDisplay(first);
    return 0;
}