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

void InsertAtPosition(int x, int pos)
{
    struct Node *t, *p;
    p = Head;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    // If inserting at the beginning
    if (pos == 0)
    {
        if (Head == NULL)
        {
            // If the list is empty
            t->next = t;
            Head = t;
        }
        else
        {
            // Traverse to the last node
            while (p->next != Head)
            {
                p = p->next;
            }
            t->next = Head;
            p->next = t;
            Head = t;
        }
    }
    else
    {
        // Inserting at position other than the beginning
        for (int i = 0; i < pos - 1 && p->next != Head; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void DisplayElement(struct Node *p)
{
    if (Head != NULL)
    {
        do
        {
            printf("Element of Circular Linked List: %d\n", p->data);
            p = p->next;
        } while (p != Head);
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    CreateNode(A, 5);
    printf("Nodes Are Created.\n");

    // Test inserting at various positions
    InsertAtPosition(5, 0);  // Insert at beginning
    InsertAtPosition(35, 3); // Insert at position 3
    InsertAtPosition(60, 6); // Insert at the end (position after the last element)

    printf("Now, Displaying the Elements of Circular Linked List.\n");
    DisplayElement(Head);
    return 0;
}
