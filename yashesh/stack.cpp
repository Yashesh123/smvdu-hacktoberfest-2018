#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1;
void push(int);
int pop();
void display();
int a[10];
int main()
{
	int choice,n,b[10],i,ans;
	do{
		printf("1.Push\n 2.Pop\n 3.Display\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the number\n");
					scanf("%d",&n);
					push(n);
					break;
			case 2:b[i]=pop();
					printf("%d\n",b[i]);
					break;
			case 3:display();
					break;
			default:printf("Invalid choice\n");
		}printf("Do you want to continue\n");
		ans=getch();
		
	}while(ans=='Y'||ans=='y');
}
void push(int n)
{
	top++;
	a[top]=n;
}
int pop()
{
	int n;
	n=a[top];
	top--;
	return n;
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
		printf("%d\n",a[i]);
}
