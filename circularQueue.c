// Circular Queue
#include <stdio.h>
#include <stdlib.h>
#define max 10
void dequeue();
void enqueue();
void display();
int queue[max], front = -1, rear = -1;
int main()
{
	int ch;
	while (1)
	{
		printf("Enter your choice:\n");
		printf("1.Dequeue\t2.Enqueue\t3.Display all\t4.Exit\n");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			dequeue();
			break;
		case 2:
			enqueue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("Invalid choice\n");
		}
	}
	return 0;
}
void dequeue()
{
	if (rear == -1)
		printf("Queue is empty");
	else if (front == rear)
	{
		printf("%d is removed", queue[front]);
		front = -1;
		rear = -1;
	}
	else
	{
		printf("%d is removed", queue[front]);
		front = (front + 1) % max;
	}
}
void enqueue()
{
	int val;
	if (front == (rear + 1) % max)
		printf("Queue is full");
	else
	{
		if (rear == -1 && front == -1)
		{
			front = 0;
		}
		printf("Enter the value to enter: ");
		scanf("%d", &val);
		printf("%d is enqueued", val);
		rear = (rear + 1) % max;
		queue[rear] = val;
	}
}
void display()
{
	int i;
	if (rear == -1)
		printf("Queue is empty");
	else
	{
		printf("Items are:\n");
		if (rear >= front)
			for (i = front; i <= rear; i++)
				printf("%d\t", queue[i]);
		else
		{
			for (i = front; i <= max - 1; i++)
				printf("%d\t", queue[i]);
			for (i = 0; i <= rear; i++)
				printf("%d\t", queue[i]);
		}
	}
}