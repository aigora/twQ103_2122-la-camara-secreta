#include<stdio.h>

int main(){

    int opcion,jugadores;


    do{


    printf("Elija la opcion que desee\n");

    printf("1-Intrucciones del juego\n");
    printf("2-Numero de jugadores para iniciar el juego\n");
    printf("3-Salir\n");

    scanf("%d",&opcion);

    switch(opcion) {

            case 1:
    			printf("Aqui se explocarian las intrucciones del juego");
        		break;

            case 2:
                printf("ELija el numero de jugadores (1-4)");
                scanf("%d",&jugadores);
                break;

	}

    }while(opcion!=3);


}
