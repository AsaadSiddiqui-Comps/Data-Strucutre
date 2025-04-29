#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

// Function to add an element to the queue
void enqueue(int value) {
    // Check if the queue is full (overflow condition)
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return; // Exit the function if overflow occurs
    }
    // If the queue is empty, set front to 0
    if (front == -1)
        front = 0;
    // Increment rear and add the new element to the queue
    queue[++rear] = value;
    printf("%d enqueued into queue\n", value);
}

// Function to remove an element from the queue
void dequeue() {
    // Check if the queue is empty (underflow condition)
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return; // Exit the function if underflow occurs
    }
    // Print the dequeued element and increment front
    printf("Dequeued element: %d\n", queue[front++]);
    // If all elements are dequeued, reset front and rear to -1
    if (front > rear)
        front = rear = -1;
}

// Function to display the elements in the queue
void display() {
    // Check if the queue is empty
    if (front == -1) {
        printf("Queue is Empty\n");
        return; // Exit if the queue is empty
    }
    // Print the elements of the queue
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int choice, value;
    // Main loop to present the menu and get user input
    do {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice); // Read the user's choice
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value); // Read the value to enqueue
                enqueue(value);     // Call the enqueue function
                break;
            case 2:
                dequeue();         // Call the dequeue function
                break;
            case 3:
                display();         // Call the display function
                break;
            case 4:
                printf("Exiting...\n"); // Print exit message
                break;
            default:
                printf("Invalid choice\n"); // Handle invalid choices
        }
    } while (choice != 4); // Continue until the user chooses to exit
    return 0;              // Return 0 to indicate successful execution
}
