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
    int sum = 0;
    while (p != NULL)
    {
        // printf("Data of linked list is : %d \n", p->data);
        sum = sum + p->data;
        p = p->next;
    }
    printf("Sum of Elements are : %d", sum);
}
int main()
{
    int A[] = {2, 3, 4, 5, 6, 7, 8, 9};
    CreateNode(A, 8);
    DisplayData(first);
    return 0;
}