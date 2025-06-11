#include <stdio.h>
int main(){
int A[] = {3,6,3,7,9,6,2,1,7};
int sum = 0 ,max=A[0],min=A[0];
int len = sizeof(A)/sizeof(A[0]);
while(len>0){
  len--;
  if(max<A[len])max = A[len];
  if(min>A[len])min = A[len];
}
printf("Max = %d Min = %d",max,min);
}
