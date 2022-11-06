// stack using array push and pop
#include <stdio.h>
#define SIZE 10
typedef struct stack
{
  int arr[SIZE];
} stack;
stack obj;
int top = -1;
void push();
void pop();
void display();
int main()
{
  int choice;
  while (1)
  {
    printf("\n\n***** MENU *****\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("\nWrong selection!!! Try again!!!");
    }
  }
  return 0;
}
void push()
{
  if (top == SIZE)
  {
    printf("The stack is full !!!\n");
  }
  else
  {
    int value;
    printf("enter the value to be added : ");
    scanf("%d", &value);
    top++;
    obj.arr[top] = value;
    printf("insertion success !!!\n");
  }
}
void pop()
{
  if (top == -1)
  {
    printf("the stack is empty !!!\n");
  }
  else
  {
    printf("Deleted : %d\n", obj.arr[top]);
    top--;
  }
}
void display()
{
  int i;
  if (top == -1)
  {
    printf("Stack is empty !!!");
  }
  else
  {
    for (i = top; i >= 0; i--)
    {
      printf("%d\n", obj.arr[i]);
    }
  }
}