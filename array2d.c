#include<stdio.h>
int main(){
    int mat1[2][2],mat2[2][2],add[2][2],mul[2][2],sub[2][2],i,j,k,multi;
    printf("Enter 4 elements of 1st matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&mat1[i][j]);
    printf("Enter 4 elements of 2nd matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&mat2[i][j]);
    printf("Sum of matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            add[i][j]=mat1[i][j]+mat2[i][j];
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sub[i][j]=mat1[i][j]-mat2[i][j];
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication of matrix is:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            multi=0;
            for(k=0;k<2;k++){
                multi=multi+mat1[i][k]*mat2[k][j];
            }
            mul[i][j]=multi;
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}