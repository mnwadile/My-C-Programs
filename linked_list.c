#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;

node* start = NULL;

void insert(int n)
{
    node* q;
    (node*)p = (node*)malloc(sizeof(node));
    p->data = n;
    q = start;
    while(q)
    {
        q = q->next;
    }

}

void display()
{

}

void main()
{
    int i,j,k,m,n,ch;
    printf("Hello world\n");
    while(1)
    {
        printf("Enter choice 1.Enter element in linked list at first 2.display linked list \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :    printf("Enter Element to insert in linked list");
                        scanf("%d",&n);
                        insert(n);
                        break;
            case 2 :    display();
                        break;
            default :   break;
        }
    }
}
