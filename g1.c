#include <stdio.h>
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a=*b;
   *b=temp;


}
int main(){
    int a,b;
    printf("Enter any two integers : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("Integers after swapping are : ");
    printf("%d %d",a,b);
}