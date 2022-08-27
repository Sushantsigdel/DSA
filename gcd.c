#include<stdio.h>

int gcd(int a,int b);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("GCD is %d",gcd(a,b));
    else
        printf("GCD is %d",gcd(b,a));
    return 0;
}

int gcd(int a,int b){
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}