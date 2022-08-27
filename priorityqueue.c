#include <stdio.h>
#include <stdlib.h>
#define size 5
int item[size], rear = -1, front = -1;
void sort(int arr[], int a, int b)
{
    int i, j, temp;
    for (i = a; i < b; i++)
    {
        for (j = i + 1; j <= b; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void enqueue()
{
    int d;
    if (rear == size - 1)
        printf("Queue is full");
    else
    {
        if (front == -1 && rear == -1)
            front = 0;
        printf("Enter data to be inserted: ");
        scanf("%d", &d);
        ++rear;
        item[rear] = d;
        sort(item, front, rear);
    }
}
void dequeue()
{
    if (rear == -1)
        printf("Queue is empty");
    else if (front == rear)
    {
        printf("Deleted item is %d\n", item[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Deleted item is %d\n", item[front]);
        front++;
    }
}
void display()
{
    int i;
    if (rear == -1)
        printf("Queue is Empty");
    else
    {
        printf("Items are\n");
        for (i = front; i <= rear; i++)
            printf("%d\t", item[i]);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Enqueue \t");
        printf("2. Dequeue \t");
        printf("3. Display \t");
        printf("4. Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. \n");
        }
    }
    return 0;
}