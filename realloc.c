#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=NULL;
    if(ptr==NULL)
        printf("Memory not created\n");
    ptr=realloc(ptr,10);
    if(ptr!=NULL)
        printf("Memory created using realloc");
    free(ptr);
    return 0;
}