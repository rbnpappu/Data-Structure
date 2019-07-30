#include<stdio.h>
#include <stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
int ch;
while(1)
{
printf("\n ***Stack Menu ***");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;

case 3:
display();
case 4:
exit (0);
default :
    printf("The statement is invalid:");

}




}
}
  void push()
{
int val;
if(top==MAX-1)
{
printf("The stack is full:");
}
else
{
printf("Enter elements in Push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;

}

}

void pop()
{

if(top==-1)
{
printf("\n Stack is empty:");

}

else
{

printf("\n Deleted the elements is%d",stack[top]);
top=top-1;
}

}

void display()
{

int i;
if(top==-1)
{

printf("The stack is empty:");


}
for(i=top;i>=0;i--)
{

printf("%d\n",stack[i]);

}

}




