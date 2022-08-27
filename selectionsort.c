#include<stdio.h>
int main(){
    int arr[20],i,j,n,temp,min,loc;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter data:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                loc=j;
            }
        }
        if(loc!=i){
            temp=arr[i];
            arr[i]=arr[loc];
            arr[loc]=temp;
        }
    }
    printf("Sorted data are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}