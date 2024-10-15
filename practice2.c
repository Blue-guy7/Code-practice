#include <stdio.h>


int main(){
    int arr[100][100];
    int temp,i,j,k,rows,cols;
    printf("Enter the number of Rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns:");
    scanf("%d",&cols);
    printf("Enter the elements");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
    /*Using bubble sort to sort the matrix */
    for (i=0;i<rows;i++){
        for (j=0;j<cols-1;j++){
            for (k=0;k<cols-1;k++){
                if (*(*(arr+i)+k)>*(*(arr+i)+k+1)){
                    temp= *(*(arr+i)+k+1);
                    *(*(arr+i)+k+1)=*(*(arr+i)+k);
                    *(*(arr+i)+k)= temp;
                }
            }
        }
    }
    /*printing the matrix*/
    printf("The elements are:\n");
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
            printf("%d",*(*(arr+i)+j));
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}