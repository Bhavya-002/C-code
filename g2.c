#include <stdio.h>
void MinMax(int array[],int size,int *min,int *max);
int main(){
    int array[100],size,max=0,i;
    printf("Enter the size of your array :");
    scanf("%d",&size);
    printf("Enter the array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    int min=0;
    MinMax(array,size,&min,&max);
    printf("%d %d",min,max);

    
}
void MinMax(int array[],int size,int *min,int *max){
    int i;
    for(i=0;i<size;i++){
        *min=array[size-i-1];
        if(array[i]<*min){
            *min=array[i];
        }
        else if(array[i]>*max){
            *max=array[i];
        }
    }
    

}