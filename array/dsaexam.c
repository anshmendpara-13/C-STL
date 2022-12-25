#include <stdio.h>
#include <stdlib.h>

#define size 5
int f = -1;
int r = -1;

int arr[size];

void enqueue(void);
void dequeue(void);

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.enqueue \n2.dequeue \n3.display \n4.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            void enqueue();
            break;
        case 2:
            void dequeue();
            break;
        case 3:
            void display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice ");
        }
    }
}

void enqueue()
{
    char x;
    printf("Enter element : ");
    scanf("%c", &x);
    if ((r + 1) % size == 0)
    {
        printf("queue is full");
    }
    if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
    }
    else if (size - 1 && f != 0)
    {
        r = 0;
    }
    else
    {
        r = (r + 1) % size;
    }
    arr[r] = x;
}

void dequeue()
{
    if ((f == -1))
    {
        printf("queue is empty");
    }
    printf("deleted element is %c ", arr[f]);

    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        if (f == (size - 1))
        {
            f = 0;
        }
        else
        {
            f = (f + 1) % size;
        }
    }
}
