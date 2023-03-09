#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 10005

int N;
int front, rear;
int queue[MAX_N];

void push_front(int x) {
    if (front == 0) 
    {
    front = MAX_N - 1;
    queue[front] = x;
    } 
    else 
    {
    front--;
    queue[front] = x;
    }
}

void push_back(int x) 
{
    queue[rear] = x;
    rear = (rear + 1) % MAX_N;
}

void pop_front() 
{
    if (front == rear) 
    {
    printf("The queue is empty.\n");
    return;
    }

    printf("%d\n", queue[front]);
    front = (front + 1) % MAX_N;
}

void pop_back() 
{
    if (front == rear) 
    {
    printf("The queue is empty.\n");
    return;
    }


    rear = (rear + MAX_N - 1) % MAX_N;
    printf("%d\n", queue[rear]);
}

int main() {
char command[15];
int x;


scanf("%d", &N);

front = 0;
rear = 0;

while (N--) {
    scanf("%s", command);

    if (strcmp(command, "push_front") == 0) {
        scanf("%d", &x);
        push_front(x);
    } else if (strcmp(command, "push_back") == 0) {
        scanf("%d", &x);
        push_back(x);
    } else if (strcmp(command, "pop_front") == 0) {
        pop_front();
    } else if (strcmp(command, "pop_back") == 0) {
        pop_back();
    }
}

return 0;
}




