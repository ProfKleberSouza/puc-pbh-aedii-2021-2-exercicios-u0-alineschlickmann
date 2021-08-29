#include <stdio.h>
#include <stdlib.h>

int main() {
   int i, qnt_num, num, maior, menor;
     scanf("%i", &qnt_num);

   for(i=0; i<qnt_num; i++){
      scanf("%i", &num);
      if(i==0){
        menor = num;
        maior = num;
       } else{
           if(num > maior){
             maior = num;

            } else{ 
                if(num < menor){
                  menor = num;
                }


              }

          }

    }
   printf("MENOR = %i\nMAIOR = %i\n", menor, maior);
   return 0;
}
