#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;
node *front = NULL;
node *rear = NULL;
void qinsert()
{
    int item;
    printf("enter the item to be added = ");
    scanf("%d", &item);
    node *new;
    new = (node *)malloc(sizeof(node));
    new->info = item;
    new->next=NULL;
    // first element
    if(front == NULL){
        front = new;
        rear = new;
    }
    else{
        rear->next=new;
        rear=new;
    }
}
void qdelete(){
    if(front!=NULL){
        printf("Item deleted is :%d\n",front->info);
        front=front->next;
    }
    else{
        printf("Queue is empty !!!\n");
    }
}
void qprint(){
    node * ptr;
    ptr = front;
    printf("the queue is : ");
    while(ptr!=NULL){
        printf("%d : ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}
int main()
{
    qinsert();
    qprint();
    qinsert();
    qprint();
    qinsert();
    qprint();
    qinsert();
    qprint();
    qinsert();
    qprint();
    qinsert();
    qprint();
    qdelete();
    qprint();
    qdelete();
    qprint();
    qdelete();
    qprint();
    return 0;
}