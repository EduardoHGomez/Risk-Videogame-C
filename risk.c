#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Risk_videogame/risk_headers.h"

#define ROJO  "\x1b[41m"                         
#define CYAN  "\x1b[46m"        
#define VERDE  "\x1b[42m"      
#define AMARILLO "\x1b[43m"
#define reset_color  "\x1b[0m"     
#define BORRAR     "\e[1;1H\e[2J"   

void pantalla_principal(){
    printf("\n\t\t\t .----------------.  .----------------.  .----------------.  .----------------. ");
    printf("\n\t\t\t| .--------------. || .--------------. || .--------------. || .--------------. |");
    printf("\n\t\t\t| |  ________    | || |     _____    | || |    _______   | || |  ___  ____   | |");
    printf("\n\t\t\t| | |_   __  |   | || |    |_   _|   | || |   /  ___  |  | || | |_  ||_  _|  | |");
    printf("\n\t\t\t| |   | |__) |   | || |      | |     | || |  |  (__  _|  | || |   | |_/ /    | |");
    printf("\n\t\t\t| |   |  __ /    | || |      | |     | || |   '.___`-.   | || |   |  __'.    | |");
    printf("\n\t\t\t| |  _| |  | |_  | || |     _| |_    | || |  |` ____) |  | || |  _| |  | |_  | |");
    printf("\n\t\t\t| | |____| |___| | || |    |_____|   | || |  |_______.'  | || | |____||____| | |");
    printf("\n\t\t\t| |              | || |              | || |              | || |              | |");
    printf("\n\t\t\t| '--------------' || '--------------' || '--------------' || '--------------' |");
    printf("\n\t\t\t '----------------'  '----------------'  '----------------'  '----------------' ");
    printf("\n\n\t\t\t\t\t\t _______________________");
    printf("\n\t\t\t\t\t\t|\t1.- Jugar\t|");
    printf("\n\t\t\t\t\t\t|\t2.- Salir\t|");
    printf("\n\t\t\t\t\t\t|_______________________|");
}

void crear_tablero(int tablero[26][100]){
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (((i == 1) && ((j>=1) && (j <= 30))) || ((i == 1) && ((j>=48) && (j <= 80))))
                tablero[i][j] = 95;
            else if ((i == 3) && ((j>=32) && (j <= 46)))
                tablero[i][j] = 95;

            else if ((i == 8) && ((j>=48) && (j <= 80)))
                tablero[i][j] = 95;
            else if ((i == 9) && ((j>=1) && (j <= 38)))
                tablero[i][j] = 95;
            else if (((i == 16) && ((j>=1) && (j <= 10))))
                tablero[i][j] = 95;
            else if ((i == 14) && ((j>=56) && (j <= 80)))
                tablero[i][j] = 95;
            else if ((i == 16) && ((j>=12) && (j <= 50)))
                tablero[i][j] = 95;
            else if ((i == 18) && ((j>=52) && (j <= 54)))
                tablero[i][j] = 95;
            else if ((i == 22) && ((j>=72) && (j <= 80)))
                tablero[i][j] = 95;
            else if ((i == 23) && ((j>=28) && (j <= 50)))
                tablero[i][j] = 95;  
            else if (((i == 25) && ((j>=1) && (j <= 26))) || ((i == 25) && ((j>=56) && (j <= 72))))
                tablero[i][j] = 95;  
            else
                tablero[i][j] = 32;
        }
        
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (((i>=2) && (i<=9)) && (j==1))
                tablero[i][j] = 124;
            else if (((i>=2) && (i<=9)) && (j==30))
                tablero[i][j] = 124;
            else if (((i>=2) && (i<=8)) && (j==48))
                tablero[i][j] = 124;
            else if (((i>=2) && (i<=8)) && (j==80))
                tablero[i][j] = 124;

            else if (((i>=10) && (i<=16)) && (j==12))
                tablero[i][j] = 124;
            else if (((i>=10) && (i<=16)) && (j==38))
                tablero[i][j] = 124;

            else if (((i>=9) && (i<=14)) && (j==60))
                tablero[i][j] = 124;
            else if (((i>=9) && (i<=14)) && (j==70))
                tablero[i][j] = 124;
            else if (((i>=9) && (i<=14)) && (j==80))
                tablero[i][j] = 124;

            else if (((i>=17) && (i<=25)) && (j==1))
                tablero[i][j] = 124;
            else if (((i>=17) && (i<=25)) && (j==26))
                tablero[i][j] = 124;
            else if (((i>=17) && (i<=23)) && (j==50))
                tablero[i][j] = 124;

            else if (((i>=15) && (i<=25)) && (j==56))
                tablero[i][j] = 124;
            else if (((i>=23) && (i<=25)) && (j==72))
                tablero[i][j] = 124;
            else if (((i>=15) && (i<=22)) && (j==80))
                tablero[i][j] = 124;

        }
        
    }
    // Se colocan las cantidades
    tablero[5][16] = 0; tablero[5][17] = 0;
    tablero[5][68] = 0; tablero[5][69] = 0;
    tablero[13][24] = 0; tablero[13][25] = 0;
    tablero[11][65] = 0; tablero[11][66] = 0;
    tablero[11][74] = 0; tablero[11][75] = 0;
    tablero[20][14] = 0; tablero[20][15] = 0;
    tablero[20][38] = 0; tablero[20][39] = 0;
    tablero[18][68] = 0; tablero[18][69] = 0;
}



tablero_risk actualizar(tablero_risk mapa, int jugador);
tablero_risk datos_jugadores(tablero_risk mapa);
tablero_risk posicionar_jugadores(tablero_risk mapa);
tablero_risk imprimir_tablero(tablero_risk mapa);
tablero_risk imprimir_color_territorio(tablero_risk mapa,int i, int j, int indice_mapa);
tablero_risk posicionar_soldados(tablero_risk mapa);
tablero_risk condiciones_iniciales(tablero_risk mapa);
tablero_risk atacar(tablero_risk mapa);


int main(){
    srand(time(NULL));
    short exit = 0;
    int opcion = 0;
    tablero_risk mapa; 

    while (exit == 0){
        printf(BORRAR);
        pantalla_principal();
        printf("\n\n\t\t\tElige una opción: ");
        scanf("%d", &opcion);

        crear_tablero(mapa.tablero_principal);
        mapa = condiciones_iniciales(mapa);
        switch (opcion) //Entrar al modo de juego
        {
        case 1:
            printf(BORRAR);
            mapa = imprimir_tablero(mapa);
            mapa = datos_jugadores(mapa);
            mapa = posicionar_jugadores(mapa);
            mapa = posicionar_soldados(mapa);

            for (int i = 0; i < mapa.cantidad_jugadores; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    printf("%d ",mapa.jugadores[i].territorios_jugador[j]);
                }
                printf("\n");
            }
            

            for (int i = 0; i < mapa.cantidad_jugadores; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    printf("%d ",mapa.jugadores[i].soldados_por_territorio[j]);
                }
                printf("\n");
            }
            
            for (int i = 0; i < 8; i++)
            {
                printf("\nTerritorio %d",i);
                for (int j = 0; j < 2; j++)
                {
                    printf("\n\t%d",mapa.territorios_mapa[i].valores[j]);
                }
                
            }
            

            mapa = atacar(mapa);

            //Bloque de hold
            printf("\n");
            printf("Adios");
            scanf("%d", &opcion);
            //Hold

            break;

        case 2:
            exit = 1;
            printf("Saliendo...\n\t\t");
            break;

        }
        
    }

    return 0;
}

char regresar_color(char color){
    if (color == 'G')
        return 'G';
    else if (color == 'R')
        return 'R';
    else if (color == 'B')
        return 'B';
    else if (color == 'Y')
        return 'Y';
    else
        return 'W';        
}

tablero_risk imprimir_color_territorio(tablero_risk mapa,int i,int j,int indice_mapa){
    char color;
    color = regresar_color(mapa.territorios_mapa[indice_mapa].color);
    if (color == 'G')
        printf( VERDE "%c" reset_color, mapa.tablero_principal[i][j]);
    else if (color == 'R')
        printf( ROJO "%c" reset_color, mapa.tablero_principal[i][j]);
    else if (color == 'B')
        printf( CYAN "%c" reset_color, mapa.tablero_principal[i][j]);
    else if (color == 'Y')
        printf( AMARILLO "%c" reset_color, mapa.tablero_principal[i][j]);
    else
        printf( reset_color "%c" reset_color, mapa.tablero_principal[i][j]);
    return mapa;
}

tablero_risk imprimir_tablero(tablero_risk mapa){

    for (int i = 0; i < 26; i++)
    {   printf("\t\t\t\t");
        for (int j = 0; j < 100; j++)
        {   //Números
            if ((i==5) && (j==16))
                printf("%d",mapa.territorios_mapa[0].valores[0]);
            else if ((i==5) && (j==17))
                printf("%d",mapa.territorios_mapa[0].valores[1]);

            else if ((i==5) && (j==68))
                printf("%d",mapa.territorios_mapa[1].valores[0]);
            else if ((i==5) && (j==69))
                printf("%d",mapa.territorios_mapa[1].valores[1]);

            else if ((i==13) && (j==24))
                printf("%d",mapa.territorios_mapa[2].valores[0]);
            else if ((i==13) && (j==25))
                printf("%d",mapa.territorios_mapa[2].valores[1]);

            else if ((i==11) && (j==65))
                printf("%d",mapa.territorios_mapa[3].valores[0]);
            else if ((i==11) && (j==66))
                printf("%d",mapa.territorios_mapa[3].valores[1]);

            else if ((i==11) && (j==74))
                printf("%d",mapa.territorios_mapa[4].valores[0]);
            else if ((i==11) && (j==75))
                printf("%d",mapa.territorios_mapa[4].valores[1]);

            else if ((i==20) && (j==14))
                printf("%d",mapa.territorios_mapa[5].valores[0]);
            else if ((i==20) && (j==15))
                printf("%d",mapa.territorios_mapa[5].valores[1]);

            else if ((i==20) && (j==38))
                printf("%d",mapa.territorios_mapa[6].valores[0]);
            else if ((i==20) && (j==39))
                printf("%d",mapa.territorios_mapa[6].valores[1]);

            else if ((i==18) && (j==68))
                printf("%d",mapa.territorios_mapa[7].valores[0]);
            else if ((i==18) && (j==69))
                printf("%d",mapa.territorios_mapa[7].valores[1]);


            //Territorios
            else if (((i >= 2) && ( i <= 9)) && ((j >= 2) && (j<=29)))
                mapa = imprimir_color_territorio(mapa, i, j, 0);
            else if (((i >= 2) && ( i <= 8)) && ((j >= 49) && (j<=80)))
                mapa = imprimir_color_territorio(mapa, i, j, 1);

            else if (((i >= 10) && ( i <= 16)) && ((j >= 13) && (j<=37)))
                mapa = imprimir_color_territorio(mapa, i, j, 2);

            else if (((i >= 9) && ( i <= 14)) && ((j >= 61) && (j<=69)))
                mapa = imprimir_color_territorio(mapa, i, j, 3);
            else if (((i >= 9) && ( i <= 14)) && ((j >= 71) && (j<=79)))
                mapa = imprimir_color_territorio(mapa, i, j, 4);

            else if (((i >= 17) && ( i <= 25)) && ((j >= 2) && (j<=25)))
                mapa = imprimir_color_territorio(mapa, i, j, 5);
            else if (((i >= 17) && ( i <= 23)) && ((j >= 27) && (j<=49)))
                mapa = imprimir_color_territorio(mapa, i, j, 6);

            else if ((((i >= 15) && ( i <= 22)) && ((j >= 57) && (j<=79))) || (((i >= 22) && ( i <= 25)) && ((j >= 57) && (j<=71))))
                mapa = imprimir_color_territorio(mapa, i, j, 7);

            else
                printf( "%c" , mapa.tablero_principal[i][j]);
        }
        printf("\n");
    }
    return mapa;
}

tablero_risk datos_jugadores(tablero_risk mapa){
    short cantidad;
    char color_jugador[10];
    //Ingresar cantidad de jugadores
    printf("Ingrese la cantidad de jugadores(2-4): ");
    scanf("%d", &cantidad);
    mapa.cantidad_jugadores = cantidad;
    
    printf(BORRAR);
    //imprimir_tablero(mapa.tablero_principal);

    //Ingresar datos del jugador
    for (int i = 0; i < cantidad; i++)
    {
        printf("\t\tColores\n"CYAN"  " reset_color " Azul (B)\n"VERDE"  " reset_color
        " Verde (G)\n"AMARILLO"  " reset_color" Amarillo (Y)\n"ROJO"  "reset_color" Rojo (R)\nIngrese el color del jugador %d: ", i+1);
        scanf(" %c", &mapa.jugadores[i].color); //DEJAR ESPACIO ANTES DEL %C
        printf(BORRAR);
    }
    printf(BORRAR);
    return mapa;
}

tablero_risk actualizar(tablero_risk mapa, int jugador){
    int distribucion = 0;

    
    for (int i = 0; i < mapa.jugadores[jugador].territorios_conquistados; i++)
    {
        distribucion = mapa.jugadores[jugador].soldados/mapa.jugadores[jugador].territorios_conquistados;
        for (int j = 0; j < 8; j++)
        {
            if (mapa.jugadores[jugador].territorios_jugador[j] == 1){
                mapa.jugadores[jugador].soldados_por_territorio[j] = distribucion;
                mapa.territorios_mapa[j].valores[0] = mapa.jugadores[jugador].soldados_por_territorio[j] / 10;
                mapa.territorios_mapa[j].valores[1] = mapa.jugadores[jugador].soldados_por_territorio[j] % 10;
            }
        }
    }
    return mapa;
}

tablero_risk posicionar_jugadores(tablero_risk mapa){
    int numero_posicion;
    printf(BORRAR);
    
    for (int i = 0; i < mapa.cantidad_jugadores; i++) //Ciclo for por cada jugador del equipo
    {   printf("\n");
        
        for (int j = 0; j < 2; j++) //2 porque es la cantidad de territorios que puede elegir
        {
            mapa = imprimir_tablero(mapa);
            printf("Ingrese la posición %d del jugador %d (1-8): ", j+1, i+1);
            scanf(" %d", &numero_posicion);
            //INGRESAR NUMEROS DISTINTOS
            mapa.jugadores[i].territorios_jugador[numero_posicion-1] = 1; //Almacena la cantidad de territorios que tiene
            mapa.territorios_mapa[numero_posicion-1].color = mapa.jugadores[i].color;
            mapa.territorios_mapa[numero_posicion-1].jugador_aqui = i;
            printf(BORRAR);
        }
        printf(BORRAR);
    }

    //Asignar 0s y 1s
    for (int i = 0; i < mapa.cantidad_jugadores; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (mapa.jugadores[i].territorios_jugador[j] == 1)
                mapa.jugadores[i].territorios_jugador[j] = 1;
            else
                mapa.jugadores[i].territorios_jugador[j] = 0;
        }
        
    }
    
    return mapa;
}

tablero_risk condiciones_iniciales(tablero_risk mapa){
    for (int i = 0; i < 8; i++)
    {
        mapa.territorios_mapa[i].valores[0] = 0;
        mapa.territorios_mapa[i].valores[1] = 0;
        mapa.jugadores[i].territorios_conquistados = 2;
    }
    
    return mapa;
}


tablero_risk posicionar_soldados(tablero_risk mapa){
    printf(BORRAR);
    mapa = imprimir_tablero(mapa);
    int soldados_asignar = 12;

    //Cantidad inicial de soldados por jugador y cada isla del jugador
    for (int i = 0; i < mapa.cantidad_jugadores; i++){
        mapa.jugadores[i].soldados = 12;
        for (int j = 0; j < 8; j++)
        {
            mapa.jugadores[i].soldados_por_territorio[j] = 0;
        }
    }

    //ASIGNACIÓN DE SOLDADOS IIZUIERDA A DERECHA
    for (int i = 0; i < mapa.cantidad_jugadores; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (mapa.jugadores[i].territorios_jugador[j]==1)
            {
                mapa.jugadores[i].soldados_por_territorio[j] = soldados_asignar-(rand() % (11 + 1 - 1) + 1);
                mapa.jugadores[i].soldados = soldados_asignar - mapa.jugadores[i].soldados_por_territorio[j];

                break;
            }
        }
    soldados_asignar = 12; 
    }
    
    for (int i = 0; i < mapa.cantidad_jugadores; i++)
    {
        for (int j = 7; j > 0; j--)
        {
            if (mapa.jugadores[i].territorios_jugador[j]==1)
            {
                mapa.jugadores[i].soldados_por_territorio[j] = mapa.jugadores[i].soldados;
                break;
            }
        }
    soldados_asignar = 12; 
    }

    for (int i = 0; i < mapa.cantidad_jugadores; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (mapa.jugadores[i].territorios_jugador[j] == 1)
            {
                mapa.territorios_mapa[j].valores[0] = mapa.jugadores[i].soldados_por_territorio[j] / 10;
                mapa.territorios_mapa[j].valores[1] = mapa.jugadores[i].soldados_por_territorio[j] % 10;
            }      
        }    
    }
    
    printf(BORRAR);
    mapa = imprimir_tablero(mapa);
    return mapa;
}

tablero_risk atacar(tablero_risk mapa){
    printf(BORRAR);

    for (int i = 0; i < mapa.cantidad_jugadores; i++)
    {
        mapa.jugadores[i].soldados = 12;
    }
    

    int territorio_atacar = 0;
    int territorio_origen = 0;
    int dado_derecho;
    int dado_izquierdo;
    char hold;
    int jugador_defensa;;
    int jugador_ataca;

    while(1)
    {
        for (int i = 0; i < mapa.cantidad_jugadores; i++)
        {
            mapa = imprimir_tablero(mapa);
            printf("\nJugador %d elige un territorio para atacar(1-8): ", i+1);
            scanf(" %d", &territorio_atacar);
            territorio_atacar -= 1;
            jugador_ataca = i;
            jugador_defensa = mapa.territorios_mapa[territorio_atacar].jugador_aqui;

            printf("Territorio donde atacas: ");
            scanf(" %d", &territorio_origen);
            territorio_origen -= 1;

            for (int i = 0; i < mapa.cantidad_jugadores; i++)
            {
                for (size_t j = 0; j < 8; j++)
                {
                    printf("%d ",mapa.jugadores[i].soldados_por_territorio[j]);

                }
                printf("\n");
            }            

            printf(BORRAR);
            dado_derecho = rand() % (6 + 1 - 1) + 1;
            dado_izquierdo = rand() % (6 + 1 - 1) + 1;

            while (dado_derecho == dado_izquierdo)
            {
                dado_izquierdo = rand() % (6 + 1 - 1) + 1;
            }

            printf("\t\t\tLos resultados de tirar los dados son: \n\n");
            printf("\t\t\t%d",dado_izquierdo);
            printf("\t\t|\t\t%d",dado_derecho);
            printf("\n");
            
            printf("\nTerritorio atacar: %d", territorio_atacar);
            printf("\nTerritorio origen: %d", territorio_origen);
            printf("\nJugador que ataca: %d", jugador_ataca);
            printf("\nJugador que defiende: %d", jugador_defensa);
            
            if (dado_izquierdo > dado_derecho)
            {
                printf("\n\t\tJugador %d GANÓ, jugador %d pierde 1 soldado\n", jugador_ataca+1, jugador_defensa+1);
                mapa.jugadores[jugador_defensa].soldados -= 1;
                mapa.jugadores[jugador_ataca].soldados += 1;

                mapa = actualizar(mapa,jugador_ataca);
                mapa = actualizar(mapa,jugador_defensa);
                //Si mapa vacío
                if (mapa.jugadores[jugador_defensa].soldados_por_territorio[territorio_atacar] == 0)
                {
                    mapa.jugadores[jugador_defensa].territorios_jugador[territorio_atacar] = 0;
                    mapa.jugadores[jugador_ataca].territorios_jugador[territorio_atacar] = 1;
                    mapa.territorios_mapa[jugador_defensa].color = mapa.jugadores[jugador_ataca].color;
                }

            }

            else{
                printf("\n\t\tNADA\n");
            }

            printf("\nJugador que ataca soldados: %d", mapa.jugadores[jugador_ataca].soldados);
            printf("\nJugador que defiende soldados: %d", mapa.jugadores[jugador_defensa].soldados);       


            printf("\n\n\n\t\t\tPRESIONA ENTER PARA CONTINUAR ");
            fflush(stdin);
            getchar();
            printf(BORRAR);

        }
        
    }

    return mapa;
}
