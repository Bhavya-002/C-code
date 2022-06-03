#include <stdio.h>
void swap(int size,int *array1,int *array2);
//void swap(int size,int array1[],int array2[]);
int main(){
    int i,j,size;
    int array1[100],array2[100];
    printf("Enter the size of first array ");
    scanf("%d",&size);
    printf("enter the elements of first array");
    for(i=0;i<size;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the size of second array ");
    scanf("%d",&size);
    printf("Enter the elements of second array");
    for(j=0;j<size;j++){
        scanf("%d",&array2[j]);
    }
    swap(size,array1,array2);
    printf("The first array after swapping is:");
    for(i=0;i<size;i++){
        printf("\n%d",array1[i]);
    }
    printf("The second array after swapping is:");
     for(j=0;j<size;j++){
        printf("\n%d",array2[j]);
    }

}
/*void swap(int size,int array1[],int array2[]){
    int i,temp;
    for(i=0;i<size;i++){
        
            temp=array1[i];
            array1[i]=array2[i];
            array2[i]=temp;
        }
    
}*/
void swap(int size,int *array1,int *array2){
    int *array1End = (array1 + (size-1));
    int *array2End = (array2 + (size-1));
    while(array1 <= array1End && array2 <= array2End){
        *array1 ^= *array2;
        *array2 ^= *array1;
        *array1 ^= *array2;
        array1++;
        array2++;
    }
}