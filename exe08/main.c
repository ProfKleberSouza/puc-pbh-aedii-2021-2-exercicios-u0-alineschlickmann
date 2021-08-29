#include <stdio.h>


int main() {
   int num=1;
        while(num != 0){
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
 