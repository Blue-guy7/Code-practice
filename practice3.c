#include <stdio.h>
#include <stdlib.h>

void push(int *arr,int n,int *top){
    if (*top>=n-1){
        printf("stack overflow");
        return;
    }
    else{
        int input;
        printf("Enter the element you want to add:");
        scanf("%d",&input);
        *top= *top+1;
        *(arr+*top)=input;
        return;
    }
}

void pop(int *top){
    if (*top<0){
        printf("Underflow.");
        return;
    }
    else{
        *top= *top-1;
        return;
    }
}

void display(int *arr,int *top){
    printf("The topmost element is: \n %d",*(arr+ *top));
}

int main(){
    int *arr;
    int i,n,choice;
    int index=-1;
    int *top= &index;
    printf("Enter the stack length: ");
    scanf("%d",&n);
    arr=(int *) malloc(sizeof(int)* n);
    do
    {
        printf("\nEnter 1 for push operations,\nEnter 2 for pop operation,\nEnter 3 to display the stack and 4 to quit. ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(arr,n,top);
            break;
        case 2:
            pop(top);
            break;
        case 3:
            display(arr,top);
            break;
        case 4:
            printf("Quitting...");
            break;

        default:
            printf("Invalid input");
            break;
        }
    } while (choice!=4);
    
    return 0;
}