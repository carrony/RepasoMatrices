/*
 * matrices.c
 *
 *  Created on: 30 nov 2023
 *      Author: Usuario
 */

#include "matrices.h"
#include <stdio.h>


void pedirMatriz(int filas, int cols, int matriz[][MAXCOL]){
	int i,j;

	for (i=0; i<filas; i++) {
		for (j=0;j<cols;j++) {
			printf("Introduce el elemento (%d,%d): ", i+1, j+1);
			fflush(stdout);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void mostraMatriz(int filas, int cols, int matriz[][MAXCOL]) {
	int i,j;

		for (i=0; i<filas; i++) {
			for (j=0;j<cols;j++) {
				printf("%d\t", matriz[i][j]);
			}
			printf("\n");
		}
}
/**
 * Más del 50% de los elementos deben ser 0
 */
int esEspurea(int filas, int cols, int matriz[][MAXCOL]) {
	int contador=0;
	int i,j;

	for (i=0; i<filas; i++) {
		for (j=0;j<cols;j++) {
			if (matriz[i][j]==0) {
				contador++;
			}
		}
	}

	if (contador> (filas*cols)/2) {
		return 1;
	}
	return 0;
}
