#include <stdio.h>


#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;
node *start;
node* tail;
int n, i;
void create_ll()
{
    start = (node *)malloc(sizeof(node));
    printf("enter the number of nodes : ");
    scanf("%d", &n);
    printf("Enter the value of 0th node : ");
    scanf("%d", &(start->info));
    node *ptr;
    ptr = start;
    for (i = 1; i < n; i++)
    {
        ptr->next = (node *)malloc(sizeof(node));
        ptr = ptr->next;
        printf("Enter the value of %dth node : ", i);
        scanf("%d", &(ptr->info));
        ptr->next = start;
        if (i == n - 1) {
      tail = ptr;
    }
    }
}
void print_ll()
{
    node *ptr;
    ptr = start;
   do
    {
        i = 0;
        printf("the value of the node %d is : %d\n", i, ptr->info);
        ptr = ptr->next;
        i++;
    } while (ptr != start);
}
void insertion_begin()
{
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    tail->next= new;
    new->next = start;
    start = new;
}
void insertion_end()
{
    node *new;
    new = (node *)malloc(sizeof(node));
    new->next = start;
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    // search
    node *ptr;
    ptr = start;
    do
    {
        ptr = ptr->next;
    }while (ptr->next != start);
    ptr->next = new;
}
void insertion_loc()
{
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    int loc;
    printf("enter the loc before which new has to be added : ");
    scanf("%d", &loc);
    // searching
    node *ptr;
    node *save;
    save = start;
    ptr = start->next;
   do
    {
        if (loc <= ptr->info)
        {
            break;
        }
        save = ptr;
        ptr = ptr->next;
    } while (ptr != NULL);
    save->next=new;
    new->next=ptr;
}
void delete(){
    int item;
    printf("enter item to delete : ");
    scanf("%d",&item);
    node * ptr;
    node* save;
    ptr  = start->next;
    save = start;
   do
    {
        if(ptr->info==item){
            break;
        }
        save=ptr;
        ptr=ptr->next;
    } while (ptr->next!=NULL);
    save->next=ptr->next;
}
int main()
{
    create_ll();
    print_ll();
    
    print_ll();
    insertion_end();
    print_ll();
    insertion_loc();
    print_ll();
    delete();
    print_ll();
    return 0;
}