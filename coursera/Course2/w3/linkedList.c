#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList
{
    int  x;
    struct linkedList* next;
} List;

void swap(List* l0, List* l1, List* l2)
{
    l0->next = l2;
    l1->next = l2->next;
    l2->next = l1;
}

void printList(List* l)
{
    printf("dasfadsf");
    if (l == NULL)
    {
        printf("At end\n");
    } else
    {
        printf("Value: %d\n", l->x);
        printList(l->next);
    }
}

void bubbleSort(List* head)
{
    List* l0;
    List* l1;
    List* l2;
    while(l2->next != NULL)
    {
        if (l1->x > l2->x)
        {
            swap(l0, l1, l2);
        }
        l0 = l1;
        l2 = l2->next;
        l1 = l2;
    }
}

void add_elements(int num, List* head)
{
    if (num == 0)
    {
        head->next = NULL;
    } else 
    {
        List l;
        l.x = rand() % 100;
        head->next = &l;
        add_elements(num - 1, &l);
    }
}


int main(void)
{   
    List* head;
    add_elements(4, head);
    printList(head);
    bubbleSort(head);
    printList(head);
    return 0;
}
