#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void begInsert();
void endInsert();
void midInsert();
void begDelete();
void endDelete();
void midDelete();
void display();
void search();

int main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n\n **********Main Menu**********\n");
        printf("\n Choose one option from the following list ...\n");
        printf("\n ==============================\n");
        printf("\n 1. Insert in beginning\n 2. Insert at last\n 3. Insert at any random position\n 4. Delete from beginning\n 5. Delete from last\n 6. Delete from any random position\n 7. Search\n 8. Display\n 9. Exit");
        printf("\n Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            begInsert();
            break;
        case 2:
            endInsert();
            break;
        case 3:
            midInsert();
            break;
        case 4:
            begDelete();
            break;
        case 5:
            endDelete();
            break;
        case 6:
            midDelete();
            break;
        case 7:
            search();
            break;
        case 8:
            display();
            break;
        case 9:
            exit(0);
            break;
        default:
            printf("\n Please enter valid choice..");
        }
    }
    return 0;
}
void begInsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter value\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Node inserted");
    }
}

void endInsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter value:\n");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\n Node inserted");
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\n Node inserted");
        }
    }
}
void midInsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("\n Enter element value");
        scanf("%d", &item);
        ptr->data = item;
        printf("\n Enter the location after which you want to insert: ");
        scanf("\n %d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\n Can't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\n Node inserted");
    }
}
void begDelete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n List id empty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\n Node deleted from the beginning ...\n");
    }
}
void endDelete()
{
    struct node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\n List is empty");
    }
    else if (head->next == NULL)
    {
        head == NULL;
        free(head);
        printf("\n Only node of the list deleted ...\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\n Deleted Node from the last ...\n");
    }
}
void midDelete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\n Enter the location of the node after which you want to perform the deletion\n");
    scanf("%d", &loc);
    ptr = head;
    for (i = 0; i < loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("\n Can't delete");
            return;
        }
    }
    ptr1->next = ptr->next;
    free(ptr);
    printf("\n Deleted node %d", loc + 1);
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n Empty list\n");
    }
    else
    {
        printf("\n Enter item which you want to search:\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\n Item found at location %d", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("\n Item not found\n");
        }
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n Nothing to print");
    }
    else
    {
        printf("\n Printing value . . . .\n");
        while (ptr != NULL)
        {
            printf("\n %d", ptr->data);
            ptr = ptr->next;
        }
    }
}