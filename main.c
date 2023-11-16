#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {
    float x[5], y[5], d[10], menor, mayor;
    int cont=0;
    for (int i = 0; i < 5; i++)
    {
        x[i] = ingresarCoordenadas('X',i);
        y[i] = ingresarCoordenadas('Y',i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("La coordenadas del punto %d son (%.2f,%.2f)\n",i,x[i],y[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            d[cont] = calcularDistancia(x[i],y[i],x[j],y[j]);
            printf("La distancia entre el punto %d y el punto %d es: %.2f\n",i,j,d[cont]);
            cont++;
        }
    }

    menor = encontrarMenor(d,10);
    printf("El la distancia menor es: %.2f\n",menor);
    mayor = encontrarMayor(d,10);
    printf("El la distancia mayor es: %.2f\n",mayor);

   
    return 0;
}