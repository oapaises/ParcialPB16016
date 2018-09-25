#include <stdio.h>
int acumulador, comparador, taman, resultado;
int main(){
	int f, c, tamanio, suma;
	
	printf("Ingrese el tamaño de las matriz cuadrada N*N: ");
	scanf("%d", & tamanio );
	int Matriz[tamanio][tamanio];
	taman=(tamanio*2)+2;
	
	
	printf("\nLLENADO DE MATRIZ  \n");
	for(f=0; f<tamanio;f++){
		for(c=0; c<tamanio; c++){
			printf("Ingrese el valor %d,%d para la matriz: ", f, c);
			scanf("%d", & Matriz[f][c]);	
		}
	}
	printf("\n MATRIZ  \n");
	for(f=0; f<tamanio;f++){
		printf("\n");
		for(c=0; c<tamanio; c++){
			printf("%d\t", Matriz[f][c]);
		}
	}
	
	printf("\n COMPROBACION MATRIZ  \n");
	suma=0;	
	for(f=tamanio; f<0; f--){ //Suma la diagonal 
			suma= suma+(Matriz[f][f]);	
			
		}acumulador=acumulador+(Matriz[f][f]);
		comparador=acumulador;
		printf("             %d", suma);
	for(f=0; f<tamanio;f++){
		printf("\n");
		suma=0;			
		for(c=0; c<tamanio; c++){//Suma las filas
			suma=suma+(Matriz[f][c]);
			
			acumulador=acumulador+(Matriz[f][c]);
			printf("%d\t", Matriz[f][c]);
		}
		printf("%d ", suma);
		}
	printf("\n");	

	for(c=0; c<tamanio; c++){ 
		suma=0; 
		for(f=0; f<tamanio; f++){ //Suma las columnas
			suma=suma+(Matriz[f][c]); 
			acumulador=acumulador+(Matriz[f][c]);
		} 
		 printf("%d\t", suma);
	} 
	suma=0;
	for(f=0; f<tamanio; f++){ //Suma la otra diagonal 
			suma= suma+(Matriz[f][f]);	
			
		}acumulador=acumulador+(Matriz[f][f]);
		printf("%d         ", (suma));
		
		resultado=(acumulador/taman);
		
		if(resultado==comparador){
			printf("La Matriz es Amiga \n");
		}else {
			printf("La Matriz NO es Amiga \n");
		}
}

