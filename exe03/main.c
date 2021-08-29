#include <stdio.h>

int main() {
   int number;
   scanf("%i", &number);
   if(number == 0){
     printf("NUMERO NEUTRO\n");
   }else{
if(number%2 == 0){
      printf("NUMERO PAR ");

      if(number < 0){
        printf("NEGATIVO\n");
      }else{
        printf("POSITIVO\n");
      }
    }else{
      printf("NUMERO IMPAR ");

      if(number < 0){
        printf("NEGATIVO\n");
       }else{
         printf("POSITIVO\n");
      }
    }
   }

      return 0;
   }

    
    