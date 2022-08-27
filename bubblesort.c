#include<stdio.h>
int main(){
    int arr[20],i,j,n,temp;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter data:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    printf("Sorted data are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}
