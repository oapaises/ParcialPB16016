#include <stdio.h>
int main(){
	int f, c, filas, columnas, mayorColum, menorFilas, posicionf, posicionc;
	printf("Ingrese el tamaño de las Filas : ");
	scanf("%d", & filas );
	printf("Ingrese el tamaño de las Columnas : ");
	scanf("%d", & columnas );
	int Matriz [filas][columnas];
	printf("\nLLENADO DE MATRIZ  \n");
	for(f=0; f<filas;f++){
		for(c=0; c<columnas; c++){
			printf("Ingrese el valor %d,%d para la matriz: ", f, c);
			scanf("%d", & Matriz[f][c]);	
		}
	}
	printf("\n MATRIZ  \n");
	for(f=0; f<filas;f++){
		printf("\n");
		for(c=0; c<columnas; c++){
			printf("%d\t", Matriz[f][c]);
		}
	}
	mayorColum=Matriz[0][0];
	menorFilas=Matriz[0][0];
	int col=0;
	for(f=0; f<filas;f++){
			if(menorFilas>Matriz[f][col]){
			menorFilas=Matriz[f][col];
			posicionf=f;
			
		}else {
			menorFilas=menorFilas;
			posicionf=f;
		}
		int fil=0,
		for(c=0; c<columnas;f++){
			if(mayorColum<Matriz[fil][c]){
			mayorColum=Matriz[fil][c];
			posicionc=c;
			
		}else {
			mayorColum=mayorColum;
			
			posicionc=c;
		}
		printf("el punto de silla es:%d y esta en la posicion %d%d\n",Matriz[posicionf][posicionc],posicionf,posicionc);
}
