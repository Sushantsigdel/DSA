#include<stdio.h>
struct A{
    int x;
    char y;
};
int main(){
    struct A a;
    printf("Enter a integer and a character:\n");
    scanf("%d %c",&a.x,&a.y);
    printf("Entered integer is %d.\n",a.x);
    printf("Entered character is %c.",a.y);
    return 0;
}