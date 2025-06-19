/*
  Write a C program to find the largest number from n integers entered 
    by the user using dynamic memory allocation.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    
    int *arr = malloc(sizeof(int)*n);
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for(int i= 0 ;i<n;i++){
        printf("Enter Your %d no ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int l=arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i]>l){
            l=arr[i];
        }
    }
    printf("Largest No %d", l);

    return 0;
}
