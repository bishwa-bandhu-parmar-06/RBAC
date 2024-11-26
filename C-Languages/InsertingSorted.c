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
void sortInsert(struct Node * p, int x){
    struct Node * t, *q = NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t-> data = x;
    t-> next = NULL;
    if(first == NULL){
        first = t;
    }
    else{
        while(p && p->data < x){
            q = p;
            p=p->next;
        }
        if(p == first){
            t -> next = first;
            first = t;
        }else{
            t-> next = q-> next;
            q->next = t;
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
    sortInsert(first, 1);
    DisplayData(first);
    return 0;
}