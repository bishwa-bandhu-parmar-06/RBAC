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
void DisplayData(struct Node *p)
{
    int TotalNodes = 0;
    while (p != NULL)
    {
        TotalNodes++;
        p = p->next;
    }
    printf("Number of Nodes Are : %d ", TotalNodes);
}
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9,10};
    CreateNode(A, 9);
    DisplayData(first);
    return 0;
}