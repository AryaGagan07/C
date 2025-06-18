// Write a C program to allocate memory for an integer using malloc and assign a value to it. Print the value and free the memory.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr = malloc(sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter Your No ");
    scanf("%d",ptr);
    printf("I think you choose %d",*ptr);
    free(ptr);
    return 0;
}
