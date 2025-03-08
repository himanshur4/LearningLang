#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
char infix[max];
char postfix[max];
char stack[max];
int top = -1;
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if (top == max - 1)
        return 1;
    else
        return 0;
}
void push(char data)
{
    top = top + 1;
    stack[top] = data;
}
char pop()
{
    char c = stack[top];
    top = top - 1;
    return c;
}

int precedence(char symbol)
{
    switch (symbol)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}
void inToPost()
{
    char symbol, next;
    int i, j = 0;
    for (int i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        switch (symbol)
        {
        case '(':
        push(symbol);
            break;
        case ')':
            while ((next = pop()) != '(')
            {
                postfix[j++] = pop();
            }
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
           if(!isEmpty())
            {
                if (precedence(symbol) <= precedence(stack[top]))
                {
                    postfix[j++] = pop();
                }
                else
                    push(symbol);
            }
            break;
        default:
            postfix[j++] = symbol;
            break;
        }
    }
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}
void print()
{
    int j = 0;
    while (postfix[j] != '\0')
    {
        printf("%c", postfix[j]);
        j++;
    }
}
int main()
{
    printf("Enter the infix expression\n");
    gets(infix);
    inToPost();
    print();
    return 0;
}