#include<stdio.h>
#include<stdlib.h>
int main(){
int*ptr1 ;
int*ptr2 ;
int*result ;
ptr1 = (int*)malloc(4* sizeof(int));
ptr2 = (int*)malloc(4* sizeof(int));
result = (int*)malloc(4* sizeof(int));
printf("Enter number of elements of 1st array:");
for (int i = 0; i <4 ; i++){
scanf("%d",&ptr1[i]);}

printf("Enter number of elements of 2nd array:");
for (int i = 0; i <4 ; i++){
scanf("%d",&ptr2[i]);}

for (int i = 0; i <4 ; i++){
if (ptr1[i] == ptr2[i]){
result[i] = ptr1[i]+ptr2[i];
}

else{
result[i] = ptr1[i];
}
}
printf("Result\n");
for (int i = 0; i <4 ; i++){
printf("%d\n",result[i]);}

return 0;

}