#include<stdio.h>

int reverse(int,int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Reverse of a number is: %d",reverse(num,0));
    return 0;
}

int reverse(int n,int rev){
    int rem=0;
    if(n>1){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        return reverse(n,rev);
    }
    else
        return rev;
}