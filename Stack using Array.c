#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE], top = -1;
void main(){
    int choice,value;
    while(1){
        printf("********/   MENU    /********");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter ur choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1 :printf("enter value :");
            scanf("%d",&value);
            push(value);
            break;
            case 2 :pop();
            break;
            case 3 :display();
            break;
            case 4 :exit(0);
            break;
            default : printf("invalid");

        }
    }

}
void push(int value){
    if(top=SIZE-1)
    printf("stack is full");
    else{
        top++;
        stack[top]=value;
        
    }
}
void pop(){
    if(top==-1)
    printf("stack is empty");
    else{
        top--;
    }
}
void display(){
     if(top==-1)
    printf("stack is empty");
    else{
        int i;
        for(i=top;i>0;top--)
        printf("%d/n",stack[i]);
    }

}