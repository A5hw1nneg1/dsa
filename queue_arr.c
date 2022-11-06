#include <stdio.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;
void qinsert()
{
    int item;
    printf("Enter the value to be inserted : ");
    scanf("%d", &item);
    // if queue is full
    if (front == rear + 1 || (front==0 && rear==SIZE-1))
    {
        printf("The queue is full !!\n");
    }
    else
    {
        // if queue is empty
        if (front == -1)
        {
            front = 0;
            rear = 0;
            queue[front] = item;
        }
        else if (rear == SIZE)
        {
            rear = 0;
            queue[rear] = item;
        }
        else
        {
            rear += 1;
            queue[rear] = item;
        }
    }
}
void qdelete()
{
    // if list is empty
    if (front == -1)
    {
        printf("List is empty cannot delete !!\n");
    }
    else
    {
        // last item on list
        if (front == rear)
        {
            printf("Item deleted is : %d\n", queue[front]);
            front = -1;
            rear = -1;
        }
        else if (front == SIZE)
        {
            printf("Item deleted is : %d\n", queue[front]);
            front = 0;
        }
        else
        {
            printf("Item deleted is : %d\n", queue[front]);
            front += 1;
        }
    }
}
void printq()
{
    int i;
    if (front == -1)
    {
        printf("The queue  is emty !!\n");
    }
    else
    {
        if (rear >= front)
        {
            printf("The queue is : ");
            for (i = front; i < rear + 1; i++)
            {
                printf(" %d :", queue[i]);
            }
            printf("\n");
        }
        else{
            printf("The queue is : ");
             for (i = front; i < SIZE ; i++)
            {
                printf(" %d :", queue[i]);
                if (front == SIZE-1)
                {
                    i=0;
                    break;
                } 
            }
            for(i = 0 ; i<rear+1 ; i++){
                printf(" %d :", queue[i]);
            }
            printf("\n");
        }
    }
}
int main()
{
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
      qdelete();
    printq();
      qdelete();
    printq();
      qdelete();
    printq();
      qdelete();
    printq();
    qinsert();
    printq();
    qinsert();
    printq();
    return 0;
}