/*
stack:
last in first out technique / first in last out technique
we can insert or delete the elements from the *top* end 
push() 		--> insert
pop()  		-->delete
top=-1 		-->indicates stack is empty
top=size-1	-->indicates stack is full
**display elements from top to bottom
*/ 
#include<stdio.h>
#include<stdlib.h>
int Top=-1;
int n,*st;
void push(int val)
{
	if(Top==n-1)
	{
		printf("Stack is full \n");
	}
	else
	{
		st[++Top]=val;
	}
}
int pop()
{
	int val;
	if(Top==-1)
	{
		return -1;
	}
	else
	{
		val=st[Top];
		st[Top--]=0;
		return val;
	}
}
void display()
{
	int i;
	if(Top==-1)
	{
		printf("Stack is empty \n");
	}
	else
	{
		for(i=Top;i>=0;i--)
		{
			printf("%d \n",st[i]);
		}
	}
	
}
int main()
{
	int i,ch,val;
	scanf("%d",&n);//size of stack
	st=(int *)calloc(n,sizeof(int));
	while(1)
	{
		printf("1.PUSH 2.POP 3.DISPLAY 4.EXIT \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//push function
			scanf("%d",&val);
			push(val);//calling push function
		}
		else if(ch==2)
		{
			//pop function
			val=pop();
			if(val==-1)
			{
				printf("Stack is empty\n");
			}
			else
			{s
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			//display function
			display();
		}
		else
		{
			//exit
			break;
		}
	}
}
