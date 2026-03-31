#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int s[MAX];
int top = -1;
push()
{
	int ele;
	if(top == MAX-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("enter element");
		scanf("%d",&ele);
		top++;
		s[top]=ele;
	}
}
pop()
{
	int ele;
	if(top == -1)
	{
		printf("stack is empty");
	}
	else
	{
		ele=s[top];
		top--;
	}
}
display()
{
	int i;
	printf("elements are\n");        
	for(i=top;i>=0;i--)
	printf("%d\n",s[i]);
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
