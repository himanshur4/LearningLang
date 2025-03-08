#include <stdio.h>
#include <stdlib.h>
#define max 5

int stackArr[max];
int top = -1;
int isFull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("stack is overflow\n");
        exit(1);
    }
    top = top + 1;
    stackArr[top] = data;
}
void pop()
{
    if (isEmpty())
    {
        printf("The stack is underflow\n");
        exit(1);
    }
    int value = stackArr[top];
    top = top - 1;
    printf("The deleted element of the stack is %d\n", value);
}
void peak()
{
    if (isEmpty())
        printf("Stack is underflow\n");
    else
        printf("The top elememt is %d\n", stackArr[top]);
}
void display()
{
    if (isEmpty())
        printf("Stack is underflow\n");
    else
    {
        printf("printing the elements of the stack\n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stackArr[i]);
        }printf("\n");
    }
}

int main()
{
    printf("\nEnter your choice:\n1.push\n2.pop\n3.printing the top element\n4.printing all elements\n5.exit\n");
    while (1)
    {
        int choice, data, n;

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the numbar of elements to be pushed\n");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &data);
                push(data);
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);

        default:
            printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}