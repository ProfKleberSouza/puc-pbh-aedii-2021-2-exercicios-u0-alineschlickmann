#include <stdio.h>

int main() {
   int A, B, C, MENOR, MAIOR;
   
   scanf("%i %i %i", &A, &B, &C);
  MENOR = A;
  MAIOR = A;



   if(MENOR > B){
     MENOR = B;
   }
     if(MENOR > C){
       MENOR = C;
     }
        if(MAIOR < B){
          MAIOR = B;
        }
        if(MAIOR < C){
          MAIOR = C;
        }
printf("MENOR = %i\nMAIOR = %i\n", MENOR, MAIOR);
   return 0;

   }

   
