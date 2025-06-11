#include <stdio.h>
int main(){
int A[] = {3,6,3,7,9,6,2,1,7};
int sum = 0 ;
int len = sizeof(A)/sizeof(A[0]);
while(len>0){
  len--;
  sum += A[len];
}
printf("Sum = %d",sum);
}
