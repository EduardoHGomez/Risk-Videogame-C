#include <stdio.h>

#ifndef TABLEROH
#define TABLEROH

typedef struct
{   char color;
    int soldados;
    int territorios_jugador[8]; //String que almacena en 1S Y 0S los territorios que tiene
    int soldados_por_territorio[8];
    int territorios_conquistados;
} jugador;

typedef struct 
{   int valores[2];
    int jugador_aqui;
    char color;
}territorio;


typedef struct
{   int coordenadas[8][2];
    int tablero_principal[26][100];
    short cantidad_jugadores;
    jugador jugadores[4];
    territorio territorios_mapa[8];
} tablero_risk;

#endif //TABLEROH