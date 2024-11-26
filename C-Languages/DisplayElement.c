#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *Head = NULL;

void CreateNode(int A[], int n)
{
    struct Node *temp, *last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void DisplayElement(struct Node *p)
{
    do
    {
        printf("Element of Circular Linkied are : %d\n", p->data);
        p = p->next;
    } while (p != Head);
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    CreateNode(A, 5);
    printf("Nodes Are Created.\n");
    printf("Now, Displaying the Elements of Circular Linked List.\n");
    DisplayElement(Head);
    return 0;
}