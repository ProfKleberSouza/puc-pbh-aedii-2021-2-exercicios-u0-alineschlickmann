#include <stdio.h>
#include <stdlib.h>

int main() {
   int lado1, lado2, lado3;
    
   scanf("%i %i %i", &lado1, &lado2, &lado3);
   
      if((lado1<lado2+lado3)&&(lado2<lado1+lado3)&&(lado3<lado1+lado2)){
        if((lado1==lado2)&&(lado2==lado3)){
          printf("TRIANGULO EQUILATERO");
        }else{ 
            if((lado1==lado2)||(lado2==lado3)||(lado3==lado1)){
              printf("TRIANGULO ISOCELES\n");

            }else{
              printf("TRIANGULO ESCALENO\n");

            }

        } 
        
      }else{
        printf("OS LADOS NAO FORMAM UM TRIANGULO\n");

      }
   return 0;
}