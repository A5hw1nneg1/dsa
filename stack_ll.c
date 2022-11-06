#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef struct node {
  int info;
  struct node *next;
} node;
node *top;
void push();
void pop();
void display();
int main(){
 int choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1:
		 push();
		 break;
	 case 2: pop();
		 break;
	 case 3: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
  return 0;
}
void push(){
  int item;
  printf("enter the item to be added = ");
  scanf("%d", &item);
  node *new;
  new = (node *)malloc(sizeof(node));
  new->info = item;
  new->next = top;
  top = new;
  node *ptr1;
  ptr1 = top;
  while (ptr1 != NULL) {
    printf("%d\n", ptr1->info);
    ptr1 = ptr1->next;
  }
}
void pop(){
  top = top->next;
  node* ptr;
  ptr = top;
  printf("Item has been popped !!!\n");
  while (ptr != NULL) {
    printf("%d\n", ptr->info);
    ptr = ptr->next;
  }
}