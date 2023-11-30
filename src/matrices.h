/*
 * matrices.h
 *
 *  Created on: 30 nov 2023
 *      Author: Usuario
 */

#ifndef MATRICES_H_
#define MATRICES_H_

#define MAXCOL 30

void pedirMatriz(int filas, int cols, int matriz[][MAXCOL]);

void mostraMatriz(int filas, int cols, int matriz[][MAXCOL]);

int esEspurea(int filas, int cols, int matriz[][MAXCOL]);

#endif /* MATRICES_H_ */
