#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int s[MAX];
int top = -1;

void push()
{
    int ele;
    if(top == MAX-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d",&ele);
        top++;
        s[top] = ele;
    }
}

void pop()
{
    int ele;
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        ele = s[top];
        printf("Deleted element: %d\n", ele);
        top--;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Elements are:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", s[i]);
        }
    }
}

int main()
{
    push();
    push();
    push();
    push();
    pop();
    pop();
    display();
    return 0;
}
