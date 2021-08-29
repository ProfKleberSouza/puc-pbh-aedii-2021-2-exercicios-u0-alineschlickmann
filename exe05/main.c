#include <stdio.h>

int main() {
   float nota1, nota2, nota3, nota4;
   float media;
    
   scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

   media = (nota1 + nota2 + nota3 + nota4) / 4;
   
      if(media >= 6){
        printf("NOTA = %.1f (APROVADO)\n", media);
      
      }else{
         printf("NOTA = %.1f (REPROVADO)\n", media);

      }
   return 0;
}