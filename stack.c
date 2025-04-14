#include <stdio.h>
#define MAX 10

int stack[MAX], top=-1,i;
int push(int value) {
   if (top==MAX-1) {
      printf("Stack overflow\n");
   }
   stack[++top]=value;
}

int pop() {
   if (top==-1) {
      printf("Stack underflow\n");
      return -1;
   }
   return stack[top--];
}

int peek() {
   if (top==-1) {
      printf("Stack is empty!\n");
      return -1;
   }
   return stack[top];
}

void display() {
   if(top==-1) {
      printf("Stack is empty\n");
   }
   for(i=top;i>=0;i--) {
      printf("%d ",stack[i]);
      printf("\n");
   }
}

int main() {
   push(32);
   push(24);
   push(16);
   push(67);
   push(89);
   printf("Last element is: %d\n",peek());
   display();
   printf("Removed: %d\n",pop());
   printf("Removed: %d\n",pop());
   display();
   return 0;
}