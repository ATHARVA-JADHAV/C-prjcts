#include<stdio.h>
#include<conio.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE], front = -1, rear = -1;
void main()
{
int value, choice;
while(1){
printf("\n\n***** MENU *****\n");
printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1: printf("Enter the value to be insert: ");
scanf("%d",&value);
enQueue(value);
break;
case 2: deQueue();
break;
case 3: display();
break;
case 4: 
default: printf("\nWrong selection!!! Try again!!!");
}
}
}
void enQueue(int value){
    if(rear=SIZE-1)
    printf("Queue is full");
    else{
        if(front=-1)
        front = 0;
        rear++;
        queue[rear]=value;

        
    }
}
void deQueue(){
    if (front=-1)
    printf("Queue is empty");
    else{
        front++;
        if(front=rear)
        front=rear=-1;   
    }   
}
void display(){
    int i;
    if(front=-1){
    printf("Queue is empty");
    }
    else{
        for(i=front;i<rear;i++);
        printf("%d",queue[i]);
    }
}