/*
  Compare malloc and calloc by printing the contents of dynamically allocated memory (before
    initialization) using both functions.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=5;
    int *ptr1 = malloc(sizeof(int)*n);
    int *ptr2 = calloc(n,sizeof(int));
    if(ptr1 == NULL){
        printf("Memory allocation by malloc failed\n");
        return 1;
    }
    if(ptr2 == NULL){
        printf("Memory allocation by Calloc failed\n");
        return 1;
    }
    printf("Calloc \n");
    for(int i = 0 ; i<n;i++){
    printf("%dth %d\n",i+1 , *(ptr1+i));
    }
    printf("Malloc \n");
    for(int i = 0 ; i<n;i++){
    printf("%dth %d\n",i+1 , *(ptr2+i));
    }
    free(ptr1);
    free(ptr2);
    return 0;
}
