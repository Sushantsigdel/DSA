#include<stdio.h>
int main(){
    int a[4],i,sum=0;
    printf("Enter 4 elements:\n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum of array is: %d",sum);
    return 0;
}