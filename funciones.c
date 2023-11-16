#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarCoordenadas(char comp, int i){
    float componente;
    printf("Ingrese la componente %c del punto %d: ",comp,i);
    scanf("%f",&componente);
    return componente;
}

float calcularDistancia(float x1, float y1, float x2, float y2){
    float dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return dist;
}

float encontrarMenor(float dist[], int longitud){
    float menor=dist[0];
    for (int i = 0; i < longitud; i++)
    {
        if (dist[i]<menor)
        {
            menor=dist[i];
        }
        
    }
    return menor;
}

float encontrarMayor(float dist[], int longitud){
    float mayor=dist[0];
    for (int i = 0; i < longitud; i++)
    {
        if (dist[i]>mayor)
        {
            mayor=dist[i];
        }
        
    }
    return mayor;
}