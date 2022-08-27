#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,n,i,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
        sum+=ptr[i];
    }
    printf("Sum is: %d",sum);
    free(ptr);
    return 0;
}