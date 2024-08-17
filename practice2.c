#include <stdio.h>


int main(){
    int arr[100][100];
    int i,j,k,rows,cols;
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
        for (j=0;j<cols;j++){
            for (k=0;k<cols;k++){
                if (*(*(arr+i)+k)>*(*(arr+i)+k+1)){
                    
                }
            }
        }
    }
    return 0;
}