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

void DeleteNode(struct Node *p, int pos)
{
    struct Node *q;
    int x = -1;
    int i;
    if (pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        free(p);
        printf("Deleted Node is  : %d", p->data);
        printf("\n");
    }
    else
    {
        p = first;
        q = NULL;
        for (i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            free(p);
        }
    }
}
void DisplayData(struct Node *p)
{
    while (p != NULL)
    {
        printf("Data of linked list is : %d \n", p->data);
        p = p->next;
    }
}
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9};
    CreateNode(A, 8);
    DeleteNode(first, 6);
    DisplayData(first);
    return 0;
}