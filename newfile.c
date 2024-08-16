#include <stdio.h>
#include <stdlib.h>
struct student{
        char Name[1000];
        int roll;
        float marks;
    };

void struct_input(struct student* list, int n){
    int i;
    
    for (i=0;i<n;i++){
        printf("Enter the details of the next student:\n");
        printf("Enter the name: ");
        scanf("%s",(list+i)->Name);
        printf("Enter roll no: ");
        scanf("%d",(list+i)->roll);
        printf("Enter Marks recieved: ");
        scanf("%f",(list+i)->marks);
    }
    
}

void display(){

}
int main(){
    int n;

    struct student arr[100];
    printf("Enter the number of records you want to add:");
    scanf("%d",&n);
    struct_input(arr,n);  

    return 0;
}