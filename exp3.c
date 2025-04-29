#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value) {
  if (top == MAX - 1) {
    printf("Stack Overflow\n");
    return;
  }
  top++;
  stack[top] = value;
  printf("%d pushed onto stack\n", value);
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow\n");
    return;
  }
  printf("Popped element: %d\n", stack[top]);
  top--;
}

void display() {
  if (top == -1) {
    printf("Stack is Empty\n");
    return;
  }
  printf("Stack elements: ");
  for (int i = top; i >= 0; i--) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  int choice, value;
  do {
    printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        printf("Enter value to push: ");
        scanf("%d", &value);
        push(value);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice\n");
    }
  } while (choice != 4);
  return 0;
}
