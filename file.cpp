#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue node;
node *front = NULL;
node *rear = NULL;
node *getnode()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    printf("\n Enter data ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}
void insertQ()
{
    node *newnode;
    newnode = getnode();
    if (newnode == NULL)
    {
        printf("\n Queue Full");
        return;
    }
    if (front == NULL)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("\n\n\t Data Inserted into the Queue..");
}
int count(node *front) // code to count the no. of nodes
{
    node *p = front;
    int k = 1;
    while (p != NULL)
    {
        p = p->next;
        k++;
    }
    return k;
}
int revQ()
{
    node *p = front;
    long int i = count(front), j = 1;
    long int arr[i];
    while (i && p != NULL)
    {
        arr[j++] = p->data;
        p = p->next;
        i--;
    }
    j--;
    while (j) // loop will break as soon as j=0
    {
        std::cout<<"  " << arr[j--] << " ";
    }
    return 0;
}
void displayQ()
{
    node *temp;
    if (front == NULL)
    {
        printf("\n\n\t\t Empty Queue ");
    }
    else
    {
        temp = front;
        printf("\n\n\n\t\t Elements in the Queue are: ");
        while (temp != NULL)
        {
            printf("%5d ", temp->data);
            temp = temp->next;
        }
    }
}
char menu()
{
    char ch;
    printf("\n \t..Queue operations using pointers.. ");
    printf("\n\t -----------**********-------------\n");
    printf("\n 1. Insert ");
    printf("\n 2. Reverse ");
    printf("\n 3. Display");
    printf("\n 4. Quit ");
    printf("\n Enter your choice: ");
    ch = getche();
    return ch;
}
int main()
{
    char ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case '1':
            insertQ();
            break;
        case '2':
            revQ();
            break;
        case '3':
            displayQ();
            break;
        case '4':
            return 0;
        }
        getch();
    } while (ch != '4');
}