#include <stdio.h>
int conlen(char str[],char str2[]){
    int i,j;
    for(i=0;str[i] != '\0';i++);
    printf("The length of the string 1 is %d",i);
    for(j=0;str2[j] != '\0';j++);
    printf("\nThe length of the string 2 is %d",j);
}
void concat(char str1[],char str2[]){
    int i,j,length=0;
    while(str1[length]!='\0'){
        ++length;
    }

    for(j=0; str2[j] != '\0'; ++length,++j){
        str1[length] = str2[j];
    }
    str1[length] = '\0';
}
void concpy(char str1[],char str2[]){
    int j;
    for(j=0; str1[j] != '\0';j++){
        str2[j] = str1[j];
    }
}

int concmp(char *str1,char *str2){
    int flag = 0;
    while(*str1==*str2){
        if (*str1 == '\0' || *str2 == '\0')
         break;
         
      str1++;
      str2++;
   }

   if (*str1 == '\0' && *str2 == '\0'){
       return 0;
   }
   else{
      return 1;
    }

}
int main(){
    char str1[50],str2[50];
    int result;
    printf("Enter first string ");
    gets(str1);
    printf("Enter second string ");
    gets(str2);
    conlen(str1,str2);
    concat(str1,str2);
    printf("\nconcated string is: %s", str1);
    concpy(str1,str2);
    printf("\nstring str2 is %s",str2);
    result=concmp(str1,str2);
    if(result==0){
    printf("\nStrings are equal");
    }
    else{
        printf("\nStrings are not equal");
    }


}