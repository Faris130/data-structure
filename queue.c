#include <stdio.h>

#define MAX_SIZE 50

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Enqueue (insert) an element
void enqueue(int data) {
  if (rear == MAX_SIZE - 1) {
    printf("Queue is full\n");
    return;
  }
  if (front == -1) {
    front = 0;
  }
  rear++;
  queue[rear] = data;
}

// Dequeue (remove) an element
int dequeue() {
  if (front == -1) {
    printf("Queue is empty\n");
    return -1; // Or any appropriate error indicator
  }
  int data = queue[front];
  front++;
  if (front > rear) {
    front = rear = -1; // Reset for empty queue
  }
  return data;
}

// Display the queue
void display() {
  if (front == -1) {
    printf("Queue is empty\n");
    return;
  }
  printf("Queue: ");
  for (int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

int main() {
  enqueue(10);
  enqueue(20);
  enqueue(30);
  display(); // Output: Queue: 10 20 30
  dequeue();
  display(); // Output: Queue: 20 30
  return 0;
}
