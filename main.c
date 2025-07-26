Add main program
#include<stdio.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push();
void pop();
void display();

int main()
{
  int choice;
   while(1)
  {
     printf("\n------Stack-----\n");
     printf("1.Push\n");
     printf("2.Pop\n");
     printf("3.Display\n");
     printf("4.Exit\n");
     printf("Enter Your choice");
     scanf("%d",&choice);

   switch(choice)
     {
case 1: push();
        break;
case 2: pop();
        break;
case 3: display();
        break;
case 4: return 0;
default:
        printf("Invalid Choice");
     }
  }
   return 0;
}
void push()
{
   int element;
     if(top==SIZE-1)
       {
          printf("Stack is Overflow");
       }
      else
       {
          printf("Enter Element");
          scanf("%d",&element);
          top++;
          stack[top]=element;
          printf("Element pushed:%d\n",element);
       }
  }
void pop()
{
    if(top==-1)
    {
        printf("Stack is Underflow");
    }
    else
   {
      printf("Element poped:%d\n",stack[top]);
      top--;
   }
}
void display()
{
   if(top==-1)
    {
       printf("Stack is Empty\n");
    }
     else
  {
     printf("Stack Element:\n");
       for(int i=top;i>=0;i--)
       {
          printf("%d\n",stack[i]);
        }
   }
}
 





