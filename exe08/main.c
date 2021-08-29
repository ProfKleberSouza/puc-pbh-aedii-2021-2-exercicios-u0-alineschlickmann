#include <stdio.h>


int main() {
   int i, qnt_num, num;
     scanf("%i", &qnt_num);

   for(i=0; i<qnt_num; i++){
      scanf("%i", &num);

      if(num < 0){
       printf("NEGATIVO\n");
      } else{
           if(num > 0){
       printf("POSITIVO\n");              
            } 
          }


    }
    return 0;
}
 