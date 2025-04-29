#include <stdio.h>

#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = item;
    printf("Inserted: %d\n", item);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Deleted: %d\n", queue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    do {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    } while (i != (rear + 1) % SIZE); // Condition corrected to handle full queue
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    display();
    return 0;
}
