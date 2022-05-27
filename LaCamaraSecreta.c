#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct jugador {
    char nombre[50];
    char apodo[50];
    int edad;
};


void imprimirInstrucciones(){
printf("Mientras te diriges en coche te cuento: dentro de la casa tendras que ir superando distintos tipos de pruebas, una vez superes dichas pruebas se te ira recompensando con secretcoin que podras ir canjeando en la tienda ");
}

void imprimirEleccion(){
    int i;
printf("Jugador %d, Prefieres que te llamen por el apodo o por el nombre?\nn-nombre\na-apodo\n",i+1);
}



int main(){
	struct jugador jugadores[2];

	char nombre[50],nombre1[50];
    char texto[50];
    char rio[50];
    char cuadro[50];
    char pais[50];
	char jugador1,jugador2;
    int vec1[9]={3,6,4,2,7,4,8,2,6},vec2[9];

    int contador,i,j,x,cont1,alternativa,aux,t,f,h,m,k,l,o;
    int criptomonedas=0,tienda;
    char w,y,z,n;
    char opcion,si,b,c,d,g,e,p,Amazonas;
    char res;
    char cor[20],pal[20]="relampago";
    char cod[20],puerta[20]="fantasma";
    int palabra=0;
	char sol[10];
	int numeros=0;
	int fila,columna,bomba=0,vida=3;

    char aux1;
    FILE * f1;
    char aux2;
    FILE * f2;
    char aux3;
    FILE * f3;
    char aux4;
    FILE * f4;
    char aux5;
    FILE * f5;
    char aux6;
    FILE * f6;
    char aux7;
    FILE * f7;

    do{




    printf("Elija la opci%cn que desee\n",162);
    printf("A-Informaci%cn del juego\n",162);
    printf("B-Numero de jugadores para iniciar el juego\n");
    printf("C-Salir\n");


    scanf("%c",&opcion);
    fflush(stdin);

    switch(opcion) {

        case 'A':
        case 'a':
    		printf("El escape room consta de un numero de personas que ingresaran en una casa encantada en la que pensaran que es un juego pero no sabran la realidad, pero dependiendo de sus decisiones acabaran dandose cuenta de que no era lo que ellos pensaban, ya que dependiendo de sus decisiones podran salir de ella.... o no.\n");
    		printf("\n");
    		printf("Cada habitacion por la que se adentren tendra un minijuego/prueba que tendran que superar si quieren avanzar hasta el final.");
    		printf("Con cada prueba superada conseguiran un numero de secretcoin que luego podran canjear por dinero real si consiguen salir de la casa\n");
        	break;

        case 'B':
        case 'b':

            do{
				printf("Indica el numero de jugadores: \n");
				fflush(stdin);
    			scanf("%d", &contador);
			}while(contador!=1&&contador!=2);
    		for(i=0; i<contador; i++) {
				printf("Introduce el nombre del jugador %d:\n",i+1);
        		scanf("%s", jugadores[i].nombre);
        		printf("Introduce el apodo del jugador %d:\n",i+1);
        		scanf("%s", jugadores[i].apodo);
        		printf("Introduce la edad del jugador %d:\n",i+1);
        		scanf("%d", &jugadores[i].edad);
        	}
    		printf("Los datos guardados son: \n");
    		for (i=0; i<contador; i++) {
				printf("jugador %d: \n	Nombre: %s\n	Apodo: %s\n		A%cos: %d \n", i+1,jugadores[i].nombre, jugadores[i].apodo,164,jugadores[i].edad);
    		}

				if(contador==1){
             printf("\nQue valiente. Te aventuraras tu solo hacia la casa embrujada\n");
        	 }


                i=0;

                do{

                imprimirEleccion();
                fflush(stdin);
                scanf("%c",&b);
                fflush(stdin);

    		}while(b!='a'&&b!='n');
    		if(b=='n'){
    		strcpy(nombre,jugadores[0].nombre);
    		strcpy(nombre1,jugadores[1].nombre);
			}else if(b=='a'){
			strcpy(nombre,jugadores[0].apodo);
			strcpy(nombre1,jugadores[1].apodo);
			}

    		system("cls");

				if(contador==2){
					printf("Parece que no estas solo y %s te va a ayudar\n",nombre1);
					printf("para ver quien va primero jugaremos un piedra papel o tijera\n");
					printf("%s :Elija piedra(I),papel(P) o tijera(T)\n",nombre);
					scanf("%c",&jugador1);
					printf("%s: Elija piedra(I), papel(P) o tijera (T)\n",nombre1);
					fflush(stdin);
					scanf("%c",&jugador2);
					if(jugador1=='I'&& jugador2=='T'){
					printf("Tijera corta papel gana %s\n",nombre);
					printf("%s se dirige en coche hacia la casa encantada", nombre);
					}
					else if(jugador1=='T' && jugador2=='I'){
					printf("Piedra rompe tijera gana %s\n",nombre1);
					printf("%s se dirige en coche hacia la casa encantada", nombre1);
					} else if (jugador1=='T' && jugador2=='P') {
					printf("Tijera corta papel gana %s\n",nombre);
					printf("%s se dirige en coche hacia la casa encantada", nombre);
					} else if (jugador1=='P' && jugador2=='T'){
					printf("Tijera corta papel gana %s\n",nombre1);
					printf("%s se dirige en coche hacia la casa encantada", nombre1);
					} else if (jugador1=='P'&& jugador2=='I') {
					printf("Papel cubre piedra gana %s\n",nombre);
					printf("%s se dirige en coche hacia la casa encantada", nombre);
					} else if (jugador1=='I' && jugador2=='P') {
					printf("Papel cubre piedra gana %s\n",nombre1);
					printf("%s se dirige en coche hacia la casa encantada", nombre1);
					} else if ((jugador1=='P'&& jugador2=='P')|| (jugador1=='I'&& jugador2=='I') || (jugador1=='T'&& jugador2=='T')) {
					printf("Hay un empate asi que %s ira primero\n",nombre);
					}
					fflush(stdin);
					printf("%s y %s se dirigen en coche hacia la casa encantada",nombre,nombre1);
				}

				fflush(stdin);
				if(contador==1){
				printf("\nSabras de que va el rollo no?\nSi sabes di 's'\nSi quieres que te haga un resumen di 'n'");
                }else if(contador==2){
                printf("\nSabreis de que va el rollo no?\nSi sabeis decid 's'\nSi quereis que os haga un resumen decid 'n'");
                }
				scanf("%c",&d);
				fflush(stdin);
				if(d=='s'){

				}else if(d=='n'){
                    imprimirInstrucciones();

				}
                if(contador==1){
				printf("\nUy %s!! Ahi hay unas escaleras, quieres utilizarlas y entrar por la ventana o sin embargo entrar como una persona normal, es decir, por la puerta? Pulse 'p' si prefieres por la puerta, o 'v' si prefieres por la ventana\n\n",nombre);
    }else if(contador==2){
        printf("\nUy %s y %s!! Ahi hay unas escaleras, quereis utilizarlas y entrar por la ventana o sin embargo entrar como una persona normal, es decir, por la puerta? Pulsad 'p' si preferis por la puerta, o 'v' si preferis por la ventana\n\n\n",nombre,nombre1);
    }
				scanf("%c",&c);
				fflush(stdin);
				if(c=='p'){
                    if(contador==1){
                        printf("O sea que vas por la parte de abajo no %s? \n",nombre);
                    }else if(contador==2){
                        printf("O sea que vais por la parte de abajo no %s y %s? \n",nombre,nombre1);
                    }
                    printf("Sinceramente, ha sido la peor eleccion.");
                    printf("\n\n");
                    printf("\nPuf, estamos encerrados ahora....\n");
                    if(contador==1){
                         printf("Espera!! Hay un cartel en la puerta, a lo mejor nos da una pista de como salir. Vete a verlo. \n");
                         printf("Leelo en voz alta\n");
                    }else if(contador==2){
                         printf("Espera!! Hay un cartel en la puerta, a lo mejor nos da una pista de como salir. Vete a verlo. \n");
                         printf("Leedlo en voz alta\n");
                    }

                     f1 = fopen("cartel.txt", "r");
                        if (f1 == NULL) {
                            printf("Error en la apertura de fichero\n");
                            return 0;
        }

                         while (aux1 != EOF) {
                            aux1=fgetc(f1);
                            printf("%c",aux1);

                }
                printf("\n");
                    fclose(f1);
                    fflush(stdin);
                    gets(texto);
                    fflush(stdin);
                    if(strcmp(texto,"Amazonas")){
                        if(contador==1){
                            printf("Madre mia... Incorrecto. No has conseguido abrir la puerta\n");
                            printf("%s, como has podido fallar esa?\n",nombre);
                            printf("\nSabes lo que te espera no?\n Vas a estar encerrado en esta casa el tiempo que dures... que sera poco\nEl juego se ha terminado, yo me voy.\nGame Over\n");
                        }else if(contador==2){
                            printf("Madre mia... Incorrecto. No habeis conseguido abrir la puerta\n");
                            printf("%s y %s, como habeis podido fallar esa?\n",nombre,nombre1);
                            printf("\nSabeis lo que os espera no?\n Vais a estar encerrados en esta casa el tiempo que dureis... que sera poco\nEl juego se ha terminado, yo me voy.\nGame Over\n");
                        }

                        break;


                    }else {
                        if(contador==1){
                            printf("Correcto!! Has conseguido que se abra la puerta");
                        }else if(contador==2){
                            printf("Correcto!! Habeis conseguido que se abra la puerta");
                        }
						criptomonedas+=1;
                    }

                    printf("Podemos continuar entonces");

                    printf("Guau... Que habitacion mas chula!!\n");
                    printf("Y todas estas letras en el suelo?\n");
                    if(contador==1){
                        printf("Suena como una voz... escuchemosla\n");
                        printf("'Hola %s, me encanta cuando pasan curiosos a mi casa, me divierto con ellos juajaja\n",nombre);
                        printf("Bueno, voy al grano. Ves las letras que hay en el suelo verdad?\n");
                        printf("Vale, pues es una sopa de letras\n");
                        printf("Tendras que encontrar las 3 palabras ocultas para conseguir avanzar en mi casa.\n");
                        printf("Yo ya me callo. Empieza!'\n");
                        }else if(contador==2){
                        printf("Suena como una voz... escuchemosla\n");
                        printf("'Hola %s y %s, me encanta cuando pasan curiosos a mi casa, me divierto con ellos juajaja\n", nombre,nombre1);
                        printf("Bueno, voy al grano. Veis las letras que hay en el suelo verdad?\n");
                        printf("Vale, pues es una sopa de letras\n");
                        printf("Tendreis que encontrar las 3 palabras ocultas para seguir avanzando en mi casa.\n");
                        printf("Yo ya me callo. Empezad!'\n");
                        }


                    printf("L U T O R T U R A\nM H K N U E U I B\nY U O P C R N C D\nD I E T L R B D S\nL T R R O O L M P\nO N B D T R C T S\nI U L S P E T C B\nO I L U S D A R T\n");

                    do{
                    gets(sol);
                        if(strcmp(sol,"terror")==0||strcmp(sol,"tortura")==0||strcmp(sol,"muerte")==0){
                           printf("Muy bien has encontrado una palabra\n");
                           palabra+=1;
                    }else{

                     printf("Esa palabra no esta\n");

                    }
                    }while(palabra!=3);
					criptomonedas+=1;
                if(contador==1){
                             printf("Muy bien! Puedes continuar. Te abro la trampilla del techo para que puedas subir a la parte de arriba");
                        }else if(contador==2){
                             printf("Muy bien! Podemos continuar. Os abro la trampilla del techo para que podais subir a la parte de arriba");
                        }


                printf("Perfecto, ya estamos arriba");
                if(contador==1){
                printf("Por cierto %s, sabes que hay una copia de esta casa?\n Pues si, esta en Transilvania.\n",nombre);
                printf("sabes en que pais esta?");
            	}else if(contador==2){
            		printf("Por cierto %s y %s, sabes que hay una copia de esta casa?\n Pues si, esta en Transilvania.\n",nombre,nombre1);
            		printf("sabeis en que pais esta?\n\n");
				}

                scanf("%s",pais);

                if(strcmp(pais,"Rumania")){
                   printf("No! No esta ahi");
                   printf("\nEsta en Rumania. Bueno, era solo una curiosidad");

                   }
                   else{
                   	criptomonedas+=1;
                    printf("Eso es!\n La verdad es que me encanto la pelicula Dracula\n");

                   }
                    if(contador==1){
                    printf("Mira! Ya hemos llegado al final. Esa es la ventana por la que tienes que salir\n");
                    printf("Hay un problema. Al lado de la ventana hay un ipad que parece que esta rayado.\n Tiene muchas letras iguales, y solo una distinta\n");
                    printf("\n Tiene pinta que para salir tendras que averiguar la letra distinta\n Pues nada, ve a ello\n");
                    }

                    else if(contador==2){
                        printf("Mira! Ya hemos llegado al final. Esa es la ventana por la que teneis que salir\n");
                        printf("Hay un problema. Al lado de la ventana hay un ipad que parece que esta rayado.\n Tiene muchas letras iguales, y solo una distinta\n");
                        printf("\n Tiene pinta que para salir tendras que averiguar la letra distinta\n Pues nada, id a ello\n");
                    	printf("Aprovechad que sois dos a ver si con 4 ojos lo veis\n");
					}
                    fflush(stdin);

                    system("pause");
                    do{
                    for(i=0;i<10000;i++){
                        printf("n");
                }
                        printf("c");
                    for(i=0;i<10000;i++){
                        printf("n");

                }
                    printf("");
                    system("cls");
                    printf("que letra era?:\n");
                    fflush(stdin);
                    scanf("%c",&res);


                    if(res=='c'){
                    	criptomonedas+=1;
                        printf("CORRECTOO!!\n Has sido el primero que ha conseguido salir de mi casa sano y salvo. No me lo esperaba para nada %s.",nombre);
                        if(contador==2){
                        	printf("y %s",nombre1);
						}
                        printf("Espero que hayas disfrutado conmigo de mi maravillosa casa. Ojala verte de nuevo por aqui.");
                        printf("******************************************************************");
                        printf("\n\n\n\n ********************FIN DEL JUEGO************************");
                        printf("******************************************************************");
                    }else{
                    printf("No era esa letra\n");
                    system("pause");
                    }
                }while(res!='c');
				}else if(c=='v'){
                    printf("Por la ventana no? Puf...\n");
                     printf("Yo hubiera elegido lo mismo. Lo malo es que la parte de abajo no la quita nadie\n");
                      printf("\n\n");
                    system("cls");
                     printf("Que es eso que hay en el suelo es una llave, pero no vale para esta puerta...\n");
                    printf("para que la llave abra la puerta hay que contestar correctamente\n");
                    printf("a la pregunta que cuelga de la llave.\n");

                     f2 = fopen("papel.txt", "r");
                        if (f2 == NULL) {
                            printf("Error en la apertura de fichero\n");
                            return 0;
        }


                         while (aux2 != EOF) {
                            aux2=fgetc(f2);
                            printf("%c",aux2);

                }
                printf("\n");
                    fclose(f2);

                    scanf("%d", &t);
                    if(t == 19){
                    	criptomonedas+=1;
                    	printf("Correcto!! ya se puede abrir la puerta.\n");
					}else{
					    if(contador==1){
                            printf("ooooh lo siento %s, respuesta incorrecta, no podras abrir la puerta\n",nombre);
                            printf("y eso significa que no podras salir nunca jamas de esta casa...\n");
                        }else if(contador==2){
                            printf("ooooh lo siento %s y %s, respuesta incorrecta, no podras abrir la puerta\n",nombre, nombre1);
                            printf("y eso significa que no podreis salir nunca jamas de esta casa...\n");
				}

						break;
					}

                    if(contador==1){
                            printf("Bueno %s, has conseguido pasar la primera puerta. Enhorabuena.\n",nombre);
                            printf("Ahora tendras que tomar una decision importante. A que lado quieres ir:\n\n");
                            printf("Hacia la derecha pulse (D) o prefieres hacia la izquierda pulse (I).\n");
                        }else if(contador==2){
                            printf("Bueno %s y %s, habeis conseguido pasar la primera puerta. Enhorabuena.\n",nombre,nombre1);
                            printf("Ahora tendreiss que tomar una decision importante. A que lado quereis ir:\n\n");
                            printf("Hacia la derecha pulse (D) o si preferis hacia la izquierda pulse (I).\n");
				}

					fflush(stdin);
                    scanf("%c",&g);

                switch (g){

                case 'D':
                case 'd':

						printf(" O sea que la eleccion es la derecha.. vaale\n");
						 if(contador==1){
                            printf("Mira en esa esquina, %s. Parece que hay un baul antiguo.\n",nombre);
                            printf("Y estas letras de la cerradura? Tiene pinta de que hay que ordenarlas para poder abrirlo\n\n");
                        }else if(contador==2){
                            printf("Mirad en esa esquina, %s y %s. Parece que hay un baul antiguo.\n",nombre,nombre1);
                            printf("Y estas letras de la cerradura? Tiene pinta de que hay que ordenarlas para poder abrirlo\n\n");
				}

						do{
                            printf("Escriba una palabra formada por estas letras: apgareolm\n\n");
                            fflush(stdin);
                            gets(cor);
                            for(i=0;i<=8;i++){
                                if(cor[i]==pal[i]){
                                    printf("^");
                            }else{
                                printf("x");
                            }
                        }
                            printf("\n");
                            }while(strcmp(pal,cor));
						criptomonedas+=1;
                        printf("Perfecto! Ya se puede abrir. A ver que contiene en su interior\n\n");
                        printf("Mira lo que hay. Con esta llave podremos abrir la siguiente puerta\n\n",nombre);

                        printf("Uf, hemos pasado esta puerta y mira lo que viene... Se ha multiplicado por 3\n\n");
                        printf("Que es esa nota? Vamos a verla a ver que dice\n\n");
                        printf("Mira! Son las instrucciones. Vamos a leerlas en voz alta\n\n");

                        f5 = fopen("nota.txt", "r");
                        if (f5 == NULL) {
                            printf("Error en la apertura de fichero\n");
                            return 0;
        }

                         while (aux5 != EOF) {
                            aux5=fgetc(f5);
                            printf("%c",aux5);

                }
                printf("\n");
                    fclose(f5);

                    printf("Pues perfecto. Al lio.\n Yo me voy al otro lado. Mucha suerte, puede que se necesite...\n\n");
					if(contador==2){
						printf("parece que esta vez debes ir tu primero %s\n\n",nombre1);
					}
                    do{
		system("pause");
		system("cls");
		printf("Elija la puerta correcta 1,2 o 3: \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
		scanf("%d",&f);

		if(f==2){
            if(contador==1){
                printf("Has pasado la primera ahora escoge la segunda puerta 1,2 o 3: \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }else {
                printf("Habeis pasado la primera ahora escoged la segunda puerta 1,2 o 3: \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }
			scanf("%d",&h);
			if(h==1){
                if(contador==1){
                printf("Ya has atravesado dos puertas ahora escoge la siguiente puerta 1,2 o 3: \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }else {
                printf("Ya habeis atravesado dos puertas ahora escoged la siguiente puerta 1,2 o 3: \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }
				scanf("%d",&m);
				if(m==1){
				    if(contador==1){
                printf("conseguiste llegar muy lejos ya falta poco, elije entre las puertas 1,2 o 3 \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }else {
                printf("conseguisteis llegar muy lejos ya falta poco, elegid entre las puertas 1,2 o 3 \n");
printf("    1                        2                         3      \n");
printf("**********              **********                **********\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*.       *              *.       *                *.       *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
printf("*        *              *        *                *        *\n");
            }
					scanf("%d",&k);

					if(k==3){
					     if(contador==1){
                            printf("Has llegado mas lejos que mucha gente, solo una ultima puerta 1,2 o 3: \n");
                        }else {
                            printf("Habeis llegado mas lejos que mucha gente, solo una ultima puerta 1,2 o 3: \n");
                        }

						scanf("%d",&l);
						if(l==1){
							criptomonedas+=1;
                            if(contador==1){
                            printf("Que buena, la verdad es que no confiaba mucho en ti. Pero ya veo de que pasta estas hecho\n");
							printf("Pues... tengo una sorpresita para ti. Sabes que son estas escaleras verdad?\n\n");
							printf("Exacto, son las que te llevan a la parte de abajo, es decir, te queda nada para salir de esta tortura.\n\n  ");
							printf("Ah!, ten cuidado y no te resbales con la cabeza del anterior curioso que quiso visitar la casa.\n\n");
							printf("Por cierto %s, mira donde se%cala su brazo. Parece que es un cuadro antiguo\n\n",nombre,164);
							printf("Acercate a el\n");
                        }else {
                            printf("Que buena, la verdad es que no confiaba mucho en vosotros. Pero ya veo de que pasta estais hecho\n\n");
							printf("Pues... tengo una sorpresita para vosotros. Sabeis que son estas escaleras verdad?\n\n");
							printf("Exacto, son las que os llevan a la parte de abajo, es decir, os queda nada para salir de esta tortura.\n\n  ");
							printf("Ah!, tened cuidado y no os resbaleis con la cabeza del anterior curioso que quiso visitar la casa.\n\n");
							printf("Por cierto %s y %s, mira donde se%cala su brazo. Parece que es un cuadro antiguo\n\n",nombre,nombre1,164);
							printf("Acercaos a el\n");
                        }


							f6 = fopen("cuadro.txt", "r");
                        if (f6 == NULL) {
                            printf("Error en la apertura de fichero\n");
                            return 0;
        }

                         while (aux6 != EOF) {
                            aux6=fgetc(f6);
                            printf("%c",aux6);

                }
                printf("\n");
                    fclose(f6);

                    fflush(stdin);
                    gets(cuadro);
                    fflush(stdin);
                    if(strcmp(cuadro,"Goya")){
                        if(contador==1){
                            printf("Madre mia... Incorrecto. Con lo lejos que habias llegado... y caes aqui\n\n");
                            printf("Te espera el mismo destino que al cadaver de las escaleras\n Suerte en tu nueva vida\n\n");
                        }else if(contador==2){
                            printf("Madre mia... Incorrecto. Con lo lejos que habiais llegado... y caeis aqui\n");
                            printf("Os espera el mismo destino que al cadaver de las escaleras\n Suerte en vuestra nueva vida\n\n");
				}


                        break;


                    }else {
                    	criptomonedas+=1;
                        printf("Correcto!!\n Espera, se ha abierto el cuadro y ya se ve la luz!\n Ya queda unicamente una puerta, que es ya la de salida. Puf.. Veamos\n\n");

                    }

                    printf("Detras de esta puerta habra acabado esta larga aventura. La verdad es que me has sorprendido %s. Para mi, ya has ganado.\n ",nombre);
                    if(contador==2){
                    	printf("y tu tambien %s de ti no me olvido\n\n",nombre1);
					}
					if(contador==1){
                    printf("Esta puerta, como ves, tiene un gran candado digital. En su pantallita, cuando quieras empezar, podras ver la combinacion numerica una sola vez.\n\n");
                    printf("Cuando creas que ya te sabes la combinacion, pulsa para continuar e introduce la sucesion\n");
                    printf("Mucha suerte\n");
					}
					else if(contador==2){
                        printf("Esta puerta, como veis, tiene un gran candado digital. En su pantallita, cuando querais empezar, podreis ver la combinacion numerica una sola vez.\n");
                        printf("Cuando creais que ya os sabes la combinacion, pulsad para continuar e introducid la sucesion\n\n");
                        printf("Mucha suerte\n");
						printf("La union hace la fuerza. Sois dos, asi que dividiros para recordar cada uno una parte\n\n");
					}
                    j=0;

                    printf("Recuerda estos numeros: 3,6,4,2,7,4,8,2,6\n\n");
                    system("pause");
                    system("cls");
                    printf("Escribe en su orden correcto los numeros\n");
                    for(j=0;j<9;j++){

                            scanf("%d",&vec2[j]);

                    }
                    for(j=0;j<9;j++){
                        if(vec1[j]==vec2[j]){

                            numeros+=1;
                        }
                    }
                    if(numeros==9){
                    	criptomonedas+=1;
                        if(contador==1){
                        printf("CORRECTOO!!\n Has sido el primero que ha conseguido salir de mi casa sano y salvo. No me lo esperaba para nada %s.\n\n",nombre);
                        printf("Espero que hayas disfrutado conmigo de mi maravillosa casa. Ojala verte de nuevo por aqui.\n\n");
                        printf("******************************************************************");
                        printf("\n\n\n\n ********************FIN DEL JUEGO************************");
                        printf("******************************************************************");
                        }
					else if(contador==2){
                        printf("CORRECTOO!!\n Habeis sido los primero que habeis conseguido salir de mi casa sanos y salvos. No me lo esperaba para nada %s y %s.\n\n",nombre, nombre1);
                        printf("Espero que hayais disfrutado conmigo de esta maravillosa casa. Ojala veros de nuevo por aqui.\n\n");
                        printf("******************************************************************");
                        printf("\n\n\n\n ********************FIN DEL JUEGO************************");
                        printf("******************************************************************");
					}


                    }else{
                        if(contador==1){
                        printf("NOOOOOO! Has fallado en la ultima prueba %s!\n\n",nombre);
                        printf("Bueno, por una parte me alegro, porque asi disfrutare de tu compa?ia para siempre...\n\n");
                        }
					else if(contador==2){
                        printf("NOOOOOO! Habeis fallado en la ultima prueba %s y %s!\n\n",nombre,nombre1);
                        printf("Bueno, por una parte me alegro, porque asi disfrutare de vuestra compa?ia para siempre...\n\n");
					}


                    }


						}else{
							printf("'Detras de la puerta se encuentra a un asesino en serie'\n\n");
							printf("Puf, nadie puede salir de esta. La puerta ya se esta cerrando.\n\n");
							printf("Game over");
							break;
						}
					}else{
					    if(contador==1){
                        printf("'Se encuentra con un techo que baja hasta aplastarle'\n");
						printf("Muerto aplastado %s? Que bajo has caido...\n",nombre);
						printf("Te veo ahora en el infierno, que habia quedado para tomar algo con Satanas\n\n");
                        }
					else if(contador==2){
                        printf("'Se encuentran con un techo que baja hasta aplastarles'\n");
						printf("Muerto aplastado %s y %s? Que bajo has caido...\n\n",nombre,nombre1);
						printf("Os veo ahora en el infierno, que habia quedado para tomar algo con Satanas\n\n");
					}

						break;
					}
				}else{
					printf("'Se la puerta y aparece un leon hambriento'\n");
					if(contador==1){
                        printf("Corre corre! \n Si te das prisa te dejo volver para atras y empezar de nuevo\n\n");
                        }
					else if(contador==2){
                       printf("Corred corred! \n Si os dais prisa os dejo volver para atras y empezar de nuevo\n\n");
					}

				}
			}else{
			    if(contador==1){
                        printf("'Al atravesar la puerta sube la lava que le termina quemando'\n");
                        printf("Joe %s, creo que te has confundido de piscina. La de agua esta al salir de la casa.\n\n",nombre);
                        printf("Te veo en el mas alla\n\n");
                        }
					else if(contador==2){
                        printf("'Al atravesar la puerta sube la lava que les termina quemando'\n");
                        printf("Joe %s y %s, creo que te has confundido de piscina. La de agua esta al salir de la casa.\n\n",nombre,nombre1);
                        printf("Os veo en el mas alla\n\n");
					}


				break;
			}
		}else{

			printf("No has pasado ni una puerta, esta vez perdono. Pero a la proxima no eh\n");
		}
	}while(l!=1);



						break;
                case 'I':
                case 'i':

						printf("%s, Te has decidido a ir por la parte de la izquierda.\n\n", nombre);
						if(contador==2){
							printf("%s la proxima pidele a %s que te deje elegir\n\n",nombre1,nombre);
						}
						printf("Mira la siguiente puerta, %s. Parece que su cerradura contiene un codigo de letras.\n\n",nombre);
						printf("Creo que tienes que hallar la combinacion para abrir la puerta\n\n");
						do{
                            printf("Escriba una palabra formada por estas letras: samatanf\n");
                            fflush(stdin);
                            gets(cod);
                            for(i=0;i<=7;i++){
                                if(cod[i]==puerta[i]){
                                    printf("^");
                            }else{
                                printf("x");
                            }
                        }
                            printf("\n");
                            }while(strcmp(puerta,cod));
						criptomonedas+=1;
                        printf("Perfecto! Ya podemos seguir avanzando,%s \n\n",nombre);
						if(contador==2){
							printf("%s enhorabuena a ti tambien que se que le has ayudado\n\n",nombre1);
						}
                        printf("Que hace una maqueta del sistema solar en el suelo?\n\n");
                        printf("A lo mejor esconde algo debajo de ella\n\n");
                        system("pause");
                        printf("Lo que me esperaba, hay una trampilla\n\n");
                        printf("Vale, viene con una pregunta\n\n");
                        printf("Pone.... Cual es el tercer planeta del Sistema Solar?\n\n");
                        printf("a) Venus\n");
                        printf("b) Marte\n");
                        printf("c) La Tierra\n");
                        scanf("%c",&n);
						if(contador==2){
							printf("la cara de %s no me gusta mucho confio en ti %s\n\n",nombre,nombre1);
						}
                        if(n=='a'){
                            printf("Te has quedado super cerca de salir de la casa.\n\n");
                            printf("Pues... creo que te tienes que quedar en esta sala el resto de tu vida %s\n\n",nombre);
                            if(contador==2){
                            	printf("al menos tienes la compa?ia de %s. Y la mia...\n\n",nombre1);
                            	break;
							}
                            printf("El juego se ha terminado... y con el, tu\n\n");
                            if(contador==2){
                            	printf("y tu %s\n\n",nombre1);
							}
                            printf("Game Over");
                            break;

                        }else if(n=='b'){
                            printf("Te has quedado super cerca de salir de la casa.\n\n");
                            printf("Pues... creo que te tienes que quedar en esta sala el resto de tu vida %s\n\n",nombre);
                            if(contador==2){
                            	printf("al menos tienes la compa?ia de %s, y la mia...\n\n",nombre1);
							}
                            printf("El juego se ha terminado... y con el, tu\n\n");
                             if(contador==2){
                            	printf("y tu %s",nombre1);
							}
                            printf("Game Over");
                            break;
                        }else if(n=='c'){
                        	criptomonedas+=1;
                            printf("Bueno, no era muy complicada que se diga. Lo raro era fallarla\n\n");
                            printf("Pues nada, ya que se ha abierto, bajemos!\n\n");

                            system("pause");
                            printf("Mira! Que suerte!");
                            printf("Hemos bajado justo a las escaleras principales, las que te van a llevar a la salida de esta casa\n\n");
                            system("pause");
                            printf("Cuidado al bajar, que son muy traicioneras. Estan llenas de los huesos de los curiosos que quisieron visitar la casa.\n\n");

                            do{
                            printf("Por cierto, hablando de huesos. Sabes cuantos tiene el ser humano?\n");
                            if(contador==2){
							printf("podeis probar a contarselo al otro\n");
						}
                            scanf("%d",&o);

                            if(o==206){
                            	criptomonedas+=1;
                                    if(contador==1){
                                printf("Muy bien! \n La verdad es que me has sorprendido gratamente. Aunque he de decir, que me lo esperaba viniendo de ti\n\n");
                                printf("Por cierto, mira donde se%cala un brazo de uno de los curiosos. Parece que es un cuadro antiguo\n",164);
                                printf("Acercate a el\n");
                        }
					else if(contador==2){
                                printf("Muy bien! \n La verdad es que me habeis sorprendido gratamente. Aunque he de decir, que me lo esperaba viniendo de vosotros");
                                printf("\n\nPor cierto, mirad donde se%cala un brazo de uno de los curiosos. Parece que es un cuadro antiguo\n",164);
                                printf("Acercaos a el\n");
					}


							f6 = fopen("cuadro.txt", "r");
                        if (f6 == NULL) {
                            printf("Error en la apertura de fichero\n");
                            return 0;
        }

                         while (aux6 != EOF) {
                            aux6=fgetc(f6);
                            printf("%c",aux6);

                }
                printf("\n");
                    fclose(f6);

                    fflush(stdin);
                    gets(cuadro);
                    fflush(stdin);
                    if(strcmp(cuadro,"Goya")){
                    	printf("Madre mia... Incorrecto. Con lo lejos que habiamos llegado...\n");
                    	if(contador==2)
                    	{
                    		printf("si hubieras dejado que %s contestase igual seriais libres\n\n",nombre1);
						}
						if(contador==1){
                            printf("Te espera el mismo destino que al cadaver de las escaleras\n Suerte en tu nueva vida\n\n");
                        }
					else if(contador==2){
                            printf("Os espera el mismo destino que al cadaver de las escaleras\n Suerte en vuestra nueva vida\n\n");
					}


                        break;


                    }else {
                    	criptomonedas+=1;
                        printf("Correcto!!\n Espera, se ha abierto el cuadro y ya se ve la luz!\n Queda unicamente una puerta, que es ya la de salida. Puf.. Veamos");

                    }

                    printf("\n\nDetras de esta puerta habra acabado esta larga aventura. La verdad es que me has sorprendido %s. Para mi, ya has ganado.\n ",nombre);
                    if(contador==2){
                    	printf("\n\ntu tambien lo has hecho muy bien %s no me olvido de ti",nombre1);
					}
                    printf("\n\nEsta puerta tiene un gran candado digital. En su pantallita se puede ver la combinacion numerica una sola vez.\n");
                    printf("\n\nDespues de mirar la combinacion, hay que pulsar para continuar e introducir la sucesion\n");
                    printf("\n\nMucha suerte\n");
                    if(contador==2)
                	{
                		printf("\n\naprovechar que sois dos para tener que memorizar menos numeros");
					}

                    j=0;

                    printf("\n\nRecuerda estos numeros: 3,6,4,2,7,4,8,2,6\n");
                    system("pause");
                    system("cls");
                    printf("Escribe en su orden correcto los numeros\n");
                    for(j=0;j<9;j++){

                            scanf("%d",&vec2[j]);

                    }
                    for(j=0;j<9;j++){
                        if(vec1[j]==vec2[j]){

                            numeros+=1;
                        }
                    }
                    if(numeros==9){
                    	criptomonedas+=1;
                        if(contador==1){
                            printf("CORRECTOO!!\n Has sido el primero que ha conseguido salir de mi casa sano y salvo. No me lo esperaba para nada %s.",nombre);
                            printf("\n\nEspero que hayas disfrutado conmigo de mi maravillosa casa. Ojala verte de nuevo por aqui.");
                            printf("******************************************************************");
                            printf("\n\n\n\n ********************FIN DEL JUEGO************************");
                            printf("******************************************************************");
                        }
                        else if(contador==2){
                            printf("CORRECTOO!!\n Habeis sido los primeros que han conseguido salir de mi casa sano y salvo. No me lo esperaba para nada %s.",nombre);
                            printf("\n\nde ti %s me lo esperaba mas se te ve cara de listo",nombre1);
                            printf("Espero que hayais disfrutado conmigo de mi maravillosa casa. Ojala veros de nuevo por aqui.");
                            printf("******************************************************************");
                            printf("\n\n\n\n ********************FIN DEL JUEGO************************");
                            printf("******************************************************************");
					}



                    }else{
                        printf("NOOOOOO! Has fallado en la ultima prueba %s!",nombre);
                        if(contador==2){
                        	printf("%s parece que tampoco has estado muy atento",nombre1);
                        	printf("Bueno, por una parte me alegro, porque asi disfrutare de vuestra compa?ia para siempre...\n\n");
						}
                        printf("Bueno, por una parte me alegro, porque asi disfrutare de tu compa?ia para siempre...\n\n");

                    }
                            }else{
                                printf("No. Mira, una pista: Esta entre 200 y 210");
                            }
                            }while(o!=206);
                        }

						break;
                default:

						printf("No has puesto ningun caracter valido.");



			}



            break;
        case 'c':
        case 'C':
            return 0;
            break;

        default:
            printf("\nNo has elegido ninguna de las opciones");
            break;

        }
}


	if(contador==1){
		printf("antes de acabar quiero que pases por mi nueva tienda puedes comprar un nivel extra, un poema o un dibujo\n");
		printf("como has superado %d niveles tienes %d monedas\n",criptomonedas,criptomonedas);
		printf("\n\npara comprar el nivel extra por 4 monedas pulse 1, para leer el poema por 2 monedas pulse 2, para ver el dibujo por 3 monedas pulse 3 y para salir pulse tu letra favorita\n");
		fflush(stdin);
		scanf("%d",&tienda);
		switch(tienda){
			case 1:printf("has decidido jugar al nivel extra por 4 monedas\n");
				if(criptomonedas>=4){
					printf("\n\nvamos a jugar a hundir la flota en el mapa de abajo he puesto un barco que ocupa 3 casillas a ver si consigues hundirlo, pero cuidado solo tienes 3 vidas");
				printf("  |  |  \n--------\n  |  |  \n--------\n  |  |  \n");
					do{
					printf("Escriba en que fila y columna quiere lanzar la bomba: \n");
					scanf("%d %d",&fila,&columna);
					if(fila==3&&columna==1){
					printf("has tocado\n");
					bomba+=1;
					if(bomba==2){
					printf("has hundido el barco\n");
					printf("  |  |  \n--------\n  |  |  \n--------\n%c |%c |  \n",223,223);
					}else{
					printf("  |  |  \n--------\n  |  |  \n--------\n %c|  |  \n",223);
					}
					}else if(fila==3&&columna==2){
					printf("has tocado\n");
					bomba+=1;
					if(bomba==2){
					printf("has hundido el barco\n");
					printf("  |  |  \n--------\n  |  |  \n--------\n%c |%c | \n",223,223);
					}else{
					printf("  |  |  \n--------\n  |  |  \n--------\n  |%c |  \n",223);
					}
				}else{
				vida-=1;
				printf("has lanzado al agua, pierdes una vida te faltan %d vidas\n",vida);
				if(vida==0){
				printf("Has perdido\n");
				}
			}
			}while(bomba!=2);
			printf("Como has sabido donde estaba?\n\n");
			}else{
				printf("No tienes monedas suficientes lo siento solo tienes %d monedas\n\n",criptomonedas);
			}
			break;
			case 2:
			printf("Has decidido leer el poema\n");
			if(criptomonedas>=2){
				printf("Deseo\n");
				printf("Por el campo tranquilo de septiembre, del alamo amarillo alguna hoja, como una estrella rota, girando al suelo viene. Si asi el alma inconsciente, Se?or de las estrellas y las hojas, fuese, encendida sombra, de la vida a la muerte.\n Escrito por: Luis Cernuda");
			}else{
				printf("\n\nNo tienes monedas suficientes lo siento solo tienes %d monedas",criptomonedas);
			}
			break;
			case 3:
				printf("Has decidido ver el dibujo\n");
			if(criptomonedas>=3){
				f7 = fopen("dibujo.txt", "r");
                        if (f1 == NULL) {
                        printf("Error en la apertura de fichero\n");
                    	}
                    	while (aux2 != EOF) {
                            aux2=fgetc(f2);
                            printf("%c",aux2);

                }
			}else{
				printf("No tienes monedas suficientes lo siento solo tienes %d monedas\n\n",criptomonedas);
			}
			break;
			default:
				printf("Vas a salir de la tienda\n");
		}
	}else{
		printf("antes de acabar quiero que paseis por mi nueva tienda podeis comprar un nivel extra, un poema o un dibujo\n");
		printf("como habeis superado %d niveles teneis %d monedas\n\n",criptomonedas,criptomonedas);
		printf("\n\npara comprar el nivel extra por 4 monedas pulsar 1, para leer el poema por 2 monedas pulsar 2, para ver el dibujo por 3 monedas pulsar 3 y para salir pulsar vuestra letra favorita\n");
		scanf("%d",&tienda);
		switch(tienda){
			case 1:printf("habeis decidido jugar al nivel extra por 4 monedas\n");
				if(criptomonedas>=4){
					printf("vamos a jugar a hundir la flota en el mapa de abajo he puesto un barco que ocupa 3 casillas a ver si conseguis hundirlo, pero cuidado solo teneis 3 vidas\n\n");
					printf("cada uno vais a jugar un turno, suerte\n");
				printf("  |  |  \n--------\n  |  |  \n--------\n  |  |  \n");
					do{
					printf("Escriba en que fila y columna quiere lanzar la bomba: \n");
					scanf("%d %d",&fila,&columna);
					if(fila==3&&columna==1){
					printf("has tocado\n");
					bomba+=1;
					if(bomba==2){
					printf("has hundido el barco\n");
					printf("  |  |  \n--------\n  |  |  \n--------\n%c |%c |  \n",223,223);
					}else{
					printf("  |  |  \n--------\n  |  |  \n--------\n %c|  |  \n",223);
					}
					}else if(fila==3&&columna==2){
					printf("has tocado\n");
					bomba+=1;
					if(bomba==2){
					printf("has hundido el barco\n");
					printf("  |  |  \n--------\n  |  |  \n--------\n%c |%c | \n",223,223);
					}else{
					printf("  |  |  \n--------\n  |  |  \n--------\n  |%c |  \n",223);
					}
				}else{
				vida-=1;
				printf("has lanzado al agua, pierdes una vida te faltan %d vidas\n",vida);
				if(vida==0){
				printf("Habeis perdido\n");
				}
			}
			}while(bomba!=2);
			printf("Como habeis sabido donde estaba?\n\n");
			}else{
				printf("No teneis monedas suficientes lo siento solo teneis %d monedas\n\n",criptomonedas);
			}
			break;
			case 2:
			printf("Habeis decidido leer el poema\n");
			if(criptomonedas>=2){
				printf("Deseo\n");
				printf("Por el campo tranquilo de septiembre, del ?lamo amarillo alguna hoja, como una estrella rota, girando al suelo viene. Si as? el alma inconsciente, Se?or de las estrellas y las hojas, fuese, encendida sombra, de la vida a la muerte.\n Escrito por: Luis Cernuda");
			}else{
				printf("\n\nNo tieneis monedas suficientes lo siento solo teneis %d monedas",criptomonedas);
			}
			break;
			case 3:
				printf("Habeis decidido ver el dibujo\n");
			if(criptomonedas>=3){
				f7 = fopen("dibujo.txt", "r");
                        if (f1 == NULL) {
                        printf("Error en la apertura de fichero\n");
                    	}
                    	while (aux2 != EOF) {
                            aux2=fgetc(f2);
                            printf("%c",aux2);

                }
			}else{
				printf("No teneis monedas suficientes lo siento solo teneis %d monedas\n\n",criptomonedas);
			}
			break;
			default:
				printf("Vais a salir de la tienda\n");
		}
	}
	printf("\n\nSi quiere volver al menu principal pulse 1:\n En cambio, si quiere salir pulse 2:\n");
	scanf("%d", &alternativa);
	fflush(stdin);


}

while(alternativa==1);

    return 0;
}
