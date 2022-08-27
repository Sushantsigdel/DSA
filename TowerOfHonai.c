#include<stdio.h>
#include<conio.h>

void tofh(int, char, char, char);

int main(){
    int n;
    printf("Enter the value of disk: ");
    scanf("%d",&n);
    tofh(n,'s','t','d');
    getch();
    return 0;
}

void tofh(int n, char s,char t,char d){
    if(n>0){
        tofh(n-1,s,d,t);
        printf("(%c-%c) ",s,d);
        tofh(n-1,t,s,d);
    }
}