#include<stdio.h>
#include<stdlib.h>
void insert();
void delet();
void display();
int ele;
#define max 5
int a[max];
int front=0;
int rear=-1;
int main()
{
int ch;
do
{
printf("\n 1.insert");
printf("\n 2.delet");
printf("\n 3.display");
printf("\n 4.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
     insert();
break;
case 2:
     delet();
break;
case 3:
     display();
break;
case 4:
     exit(0);
break;
}
}while(ch!=4);
return 0;
}
void insert()
{
if(rear==max-1)
{
printf("\n queue is overflow");
return;
}
printf("\n enter the element");
scanf("%d",&ele);
if(rear<max)
{
    rear++;
    a[rear]=ele;
    printf("%d is inserted",ele);
}
}
void delet()
{
int i;
if(front>rear)
{
printf(" \n queue is empty");
return;
}
    printf("%d is deleted",a[front]);
    for(i=0;i<rear;i++)
    {
        a[i]=a[i+1];
    }
    rear--;
}
void display()
{
int i;
if(front>rear)
{
printf("\n queue is empty");
return;
}
else
{
printf("\n queue is\n");
for(i=front;i<=rear;i++)
{
printf("%d ",a[i]);
}
}
}