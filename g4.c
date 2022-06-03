#include <stdio.h>
#include <string.h>
int check(int size,char *array,char *str);
int main(){
    char array[1000];
    char str[10];
    int size, i,result;
    printf("Enter the number of characters you want to enter: ");
    scanf("%d",&size);
    
    printf("\nEnter the string of characters: ");
   
    scanf("%s",array);
    
    printf("\nEnter any word : ");
    scanf("%s",str);
    result = check(size,array,str);
    if(result==1){
        printf("\nYes,the word can be formed");
    }
    else{
        printf("\nNo, the word can't be formed");
    }

     
}
int check(int size,char *array,char *str){
    
    int freq[256] =  {0} ;
    
    for(int i = 0; i < size; i++){
       freq[array[i]]++;
    }
    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]--;
        if (freq[str[i]] < 0)
           return 0;
  
   }
   return 1;
}