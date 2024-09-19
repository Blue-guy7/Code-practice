#include <stdio.h>
#include <stdlib.h>

struct node {
        int data;
        struct node *next;
        };

struct node *head;

void insert(){
    struct node *temp, *newnode;
    int choice2;
    temp=head;
    printf("Enter 1 to insert at begining,2 to insert at end and 3 to insert at any index:");
    scanf("%d",&choice2);
    if (choice2==1){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the element:");
        scanf("%d",&(newnode->data));
        newnode->next= temp;
        head=newnode;
        return;
    }
    else if (choice2==2)
    {
        while((temp->next)!=NULL){
        temp= temp->next;
        }
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter the next element:");
        scanf("%d",&(newnode->data));
        newnode->next=NULL;
        temp->next= newnode;
        return;
    }
    else if(choice2==3){
        int index;
        printf("Enter the index where you want to add:");
        
    }
    else{
        printf("Invalid input.");
        return;
    }
}

void disp(){
    struct node *temp;
    temp=head;
    while(temp){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return;
}


void main(){
    struct node *newnode;
    int choice;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the first element");
    scanf("%d",&(newnode->data));
    newnode->next=NULL;
    head= newnode;
    do{
        printf("\nEnter 1 to insert, 2 to delete,3 to display and 4 to quit:");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                insert();
                break;
            case 2:
                //delete();
            case 3:
                disp();
                break;
            case 4:
                printf("Quitting...");
                break;
            default:
                printf("Invalid input");
                break;
        }
    }while (choice!=4);
    
    return;
}