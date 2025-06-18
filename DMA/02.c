/*
  Write a C program using calloc to allocate memory for an array of 5 integers. 
    Initialize them to 0, and print all values.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n =5;
    int *ptr = calloc(n,sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i = 0 ; i<n ;i++){
    printf("Enter Your %dth No ",i+1);
    scanf("%d",ptr+i);
    }
    for(int i = 0 ; i<n;i++){
    printf("%dth %d\n",i+1 , *(ptr+i));
    }
    free(ptr);
    return 0;
}
