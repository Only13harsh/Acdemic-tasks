#include <stdio.h>

#define MAX_SIZE 100

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};


void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}
int isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue is full Cannot enqueue.\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
    }

    q->arr[q->rear] = value;
    printf("%d enqueued to the queue.\n", value);
}
void dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    int removedValue = q->arr[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front++;
    }
    printf("%d dequeued from the queue.\n", removedValue);
}
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}
int main() {
    struct Queue myQueue;
    initializeQueue(&myQueue);
    enqueue(&myQueue, 10);
    enqueue(&myQueue, 20);
    enqueue(&myQueue, 30);
    display(&myQueue);
    dequeue(&myQueue);
    display(&myQueue);
    enqueue(&myQueue,40);
     display(&myQueue);
    return 0;
}
