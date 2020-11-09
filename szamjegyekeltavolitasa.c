#include <stdio.h>

void removeDigits(char str[]){
   int i, j;
   for(i = 0, j = 0; str[i] != '\0'; i++){
       if(!(str[i] >= '0' && str[i] <= '9')){
str[j] = str[i];
j++;
       
       }
   } 
   str[j] = '\0';
}


int main(){

char str[] = "1sdasd432";
removeDigits(str);
printf("%s\n", str);
    return 0;
}