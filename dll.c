#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *forw;
    struct node *back;
} node;
node *start;
int i;
void create_dll()
{
    int n;
    printf("Enter no. of nodes : ");
    scanf("%d", &n);
    start = (node *)malloc(sizeof(node));
    printf("enter the value of 0th node : ");
    scanf("%d", &(start->info));
    start->back = NULL;
    node *ptr;
    node *save;
    save = start;
    ptr = start;
    for (i = 1; i < n; i++)
    {
        ptr->forw = (node *)malloc(sizeof(node));
        ptr = ptr->forw;
        printf("Enter the value of %dth node : ", i);
        scanf("%d", &(ptr->info));
        ptr->forw = NULL;
        ptr->back = save;
        save = ptr;
    }
}
void print_dll(){
    node * ptr;
    node* save;
    ptr = start;
    int i = 0;
    while (ptr!= NULL)
    {       
        printf(" The value of %dth node is :%d\n ",i,ptr->info);
        i++;
        save=ptr;
        ptr=ptr->forw;
    }
    i--;
    printf("\n reverse list is : \n");
    while(save!=NULL){
        printf(" The value of %dth node is :%d\n ",i,save->info);
        i--;
        save=save->back;
    }
}
void insert_begin()
{
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    new->forw = start;
    start->back=new;
    new->back=NULL;
    start = new;
}
void insert_end(){
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    node* ptr;
    ptr =start;
    while (ptr->forw!=NULL)
    {
        ptr=ptr->forw;
    }
    ptr->forw=new;
    new->back=ptr;
    new->forw=NULL;
}
void insert_loc(){
    node *new;
    new = (node *)malloc(sizeof(node));
    printf("Enter the value of new node : ");
    scanf("%d", &(new->info));
    int loc;
    printf("enter the loc before which new has to be added : ");
    scanf("%d", &loc);
    node* ptr;
    ptr = start;
    while(ptr!=NULL){
        if(new->info<=ptr->info){
            break;
        }
        ptr=ptr->forw;
    }
    ptr->back->forw=new;
    new->back=ptr->back;
    new->forw=ptr;
    ptr->back=new;
}
int main()
{
    create_dll();
    print_dll();
    insert_begin();
    print_dll();
    insert_end();
    print_dll();
    insert_loc();
    print_dll();
    return 0;
}