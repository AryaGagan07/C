/*
  Write a program to dynamically allocate memory for n integers (user input) 
    using malloc. Accept the numbers from the user and print their sum.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,sum = 0 ;
    printf("Enter input no ");
    scanf("%d",&n);
    int *ptr = malloc(sizeof(int)*n);
    if(ptr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i = 0 ; i<n ;i++){
    printf("Enter Your %dth No ",i+1);
    scanf("%d",ptr+i);
    }
    for(int i = 0 ; i<n ;i++){
        sum+=*(ptr+i);
    }
    printf("Sum %d\n",sum);
    free(ptr);
    return 0;
}
