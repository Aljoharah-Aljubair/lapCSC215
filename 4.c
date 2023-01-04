#include<stdlib.h>
#include<stdio.h>
#include<string.h>

char* strConcat(char* str1 , char* str2){
   int length = strlen(str1)+strlen(str2) +1;
   char* str=(char*) malloc( (length) * sizeof(char));
   char* p = str1;
   int i = 0;

   while (*p != '\0')
   {
      *(str+i++)=*p;
      p++;
   }
   
   p=str2;
   
   while (*p != '\0'){
      *(str+i++) =*p;
      p++;
   }
   
   *(str+i)='\0';
   return str;
}

int main(){
   char str1[100];
   char str2[100];

   printf("Enter name1:\n");
   scanf("%s",str1);
   printf("Enter name2:\n");
    scanf("%s",str2);
   char* str = strConcat(str1,str2);
   printf("the concaetnated string is :\n %s",str);
}