#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of square matrix(ex: if matrix is n x n then type n): ");
    scanf("%d", &n );
    int A[n][n], B[n][n] , Mul[n][n];
    for(int i=0;i<n;i++){
        printf("Enter %d value in row %d of the first matrix: ", n, (i+1));
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        printf("Enter %d value in row %d of the second matrix: ", n, (i+1));
        for(int j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }
    int sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int k=0;k<n;k++){
                sum+=A[i][k]*B[k][j];
            }
            Mul[i][j]=sum;
        }
    }
    printf("ANSWER: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ", Mul[i][j]);
        }
        printf("\n");
    }
}