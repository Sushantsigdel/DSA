#include <stdio.h>
#include <stdlib.h>
int binarySearch(int data[], int n, int start, int final)
{
    int mid = (start + final) / 2;
    if (start > final)
    {
        printf("No element found.\n");
        exit(0);
    }
    else if (n == data[mid])
    {
        return mid + 1;
    }
    else if (n > data[mid])
    {
        start = mid + 1;
    }
    else
    {
        final = mid - 1;
    }
    return binarySearch(data, n, start, final);
}
// void sort(int data[],int len){
//     int i,j,temp;
//     for(i=0;i<len-1;i++){
//         for(j=i+1;j<len;j++){
//             if(data[i]>data[j]){
//             temp=data[i];
//             data[i]=data[j];
//             data[j]=temp;
//             }
//         }
//     }
// }
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, n;
    // sort(arr,6);
    printf("Enter the value to search:");
    scanf("%d", &n);
    printf("Value is found at index %d", binarySearch(arr, n, 0, 5));
    return 0;
}