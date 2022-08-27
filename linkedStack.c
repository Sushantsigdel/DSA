#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *top;

void push();
void pop();
void display();

int main() {
    int choice = 0;
    while (choice != 4) {
        printf("\n\n **********Main Menu**********\n");
        printf("\n Choose one option from the following list ...\n");
        printf("\n ==============================\n");
        printf("\n 1. Push\n 2. Pop\n 3. Display All\n 4. Exit");
        printf("\n Enter your choice:\n");
        scanf("%d", &choice);
        switch(choice) {
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
                exit(0);
                break;
            default:
                printf("\n Please enter valid choice..");
        }
    }
    return 0;
}

void push() {
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\n OVERFLOW");
    } else {
        printf("\n Enter value\n");
        scanf("%d", &item);
        ptr -> data = item;
        ptr -> next = top;
        top = ptr;
        printf("\n Element inserted");
       
    }
}

void pop() {
    struct node *ptr;
    if(top == NULL) {
        printf("\n List is empty\n");
    } else {
        ptr = top;
        top = ptr -> next;
        free(ptr);
        printf("\n Element deleted from the stack ...\n");
    }
}

void display() {
    struct node *ptr;
    ptr = top; 
    if(ptr == NULL) {
        printf("\n Nothing to print");
    } else {
        printf("\n Printing value . . . .\n");
        while (ptr != NULL) {
            printf("\n %d", ptr -> data);
            ptr = ptr -> next;
        }
    }
}