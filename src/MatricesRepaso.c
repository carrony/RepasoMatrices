/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

int main(void) {

	int datos[MAXCOL][MAXCOL];
	int filas, columnas;

	do {
		printf("Introduce el numero de filas (entre 0 y %d): ",MAXCOL);
		fflush(stdout);
		scanf("%d", &filas);
	}while (filas<= 0 || filas >MAXCOL);

	do {
		printf("Introduce el numero de columnas (entre 0 y %d): ",MAXCOL);
		fflush(stdout);
		scanf("%d", &columnas);
	}while (columnas<= 0 || columnas >MAXCOL);

	puts("Introduce la matriz: ");
	pedirMatriz(filas,columnas,datos);

	puts("La matriz es: ");
	mostraMatriz(filas,columnas,datos);

	if (esEspurea(filas,columnas,datos)) {
		printf("La matriz es espúrea");
	}else {
		printf("La matriz NO es espúrea");
	}


	return EXIT_SUCCESS;
}
