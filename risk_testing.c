#include <stdio.h>
#include <stdlib.h>
#include<string.h>

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
    tablero[5][16] = 48;
    tablero[5][68] = 48;
    tablero[13][24] = 48;
    tablero[11][65] = 48;
    tablero[11][74] = 48;
    tablero[20][14] = 48;
    tablero[20][38] = 48;
    tablero[18][68] = 48;
}

void imprimir_tablero(int tablero[][100], char color[15]){
    //Imprimir los bordes
    for (int i = 0; i < 26; i++)
    {   printf("\t\t\t\t");
        for (int j = 0; j < 100; j++)
        {
            if (((i >= 2) && ( i <= 9)) && ((j >= 2) && (j<=29)))
                printf( VERDE "%c" reset_color, tablero[i][j]);
            else if (((i >= 2) && ( i <= 8)) && ((j >= 49) && (j<=80)))
                printf( VERDE "%c" reset_color, tablero[i][j]);

            else if (((i >= 10) && ( i <= 16)) && ((j >= 13) && (j<=37)))
                printf( VERDE "%c" reset_color, tablero[i][j]);

            else if (((i >= 9) && ( i <= 14)) && ((j >= 61) && (j<=69)))
                printf( VERDE "%c" reset_color, tablero[i][j]);
            else if (((i >= 9) && ( i <= 14)) && ((j >= 71) && (j<=79)))
                printf( VERDE "%c" reset_color, tablero[i][j]);

            else if (((i >= 17) && ( i <= 25)) && ((j >= 2) && (j<=25)))
                printf( VERDE "%c" reset_color, tablero[i][j]);
            
            else if (((i >= 17) && ( i <= 23)) && ((j >= 27) && (j<=49)))
                printf( VERDE "%c" reset_color, tablero[i][j]);

            else if ((((i >= 15) && ( i <= 22)) && ((j >= 57) && (j<=79))) || (((i >= 22) && ( i <= 25)) && ((j >= 57) && (j<=71))))
                printf( VERDE "%c" reset_color, tablero[i][j]);

            else
                printf( "%c" , tablero[i][j]);
        }
        printf("\n");
    }

}



int main(){
    short exit = 0;
    int opcion = 0;
    int tablero_principal[100][100];
    pantalla_principal();
    
    crear_tablero(tablero_principal);
    printf("\n");
    system("cls");
    imprimir_tablero(tablero_principal, "Verde");

    return 0;
}