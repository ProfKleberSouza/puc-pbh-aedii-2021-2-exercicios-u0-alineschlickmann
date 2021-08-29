#include <stdio.h>

int main() {
   int distancia, tempo, vel_media, rendimento_medio, litros;
   
      scanf("%d %d %d", &tempo, &vel_media, &rendimento_medio);

    distancia = tempo * vel_media;
    litros = distancia / rendimento_medio;

   printf("R = %i\nV = %i\nT = %i\nD = %i\nL = %i\n", rendimento_medio, vel_media, tempo, distancia, litros);

   return 0;
}