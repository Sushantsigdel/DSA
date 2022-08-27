#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
struct demoofstack
{
	int stack[STACK_SIZE];
} obj;
void push();
void pop();
void display();
void peek();
int top = -1, item, i;
int main()
{
	int choice;
	while (1)
	{
		printf("\n1)Push");
		printf("\n2)Pop");
		printf("\n3)Display all");
		printf("\n4)Peek");
		printf("\n5)Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		default:
			exit(0);
		}
	}
}
void push()
{
	if (top == STACK_SIZE - 1)
		printf("\nStack is overflow");
	else
	{
		printf("\nEnter item");
		scanf("%d", &item);
		++top;
		obj.stack[top] = item;
	}
}
void pop()
{
	if (top == -1)
		printf("\nStack is empty");
	else
	{
		item = obj.stack[top];
		top--;
		printf("\n%d is poped", item);
	}
}
void peek()
{
	if (top == -1)
		printf("\nStack is empty");
	else
		printf("\n%d is peeked", obj.stack[top]);
}
void display()
{
	if (top == -1)
		printf("\nStack is empty");
	else
	{
		printf("\nStack items are: ");
		for (i = top; i >= 0; i--)
			printf("\n%d", obj.stack[i]);
	}
}
