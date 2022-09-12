/***********************************************************
 * Fecha: 10-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: Parallel and Distributed Computing
 * Tema: Introducción Leguaje de Programación C
 * Tópico: Diseño de Benchmark
 * Fase 01: Multiplicación de Matrices Clásica
 ***********************************************************/
 
/*** Se requiere reservar un espacio de memoria ***/
#define RESERVA_MEMORIA (1024*1024*64*3)
 
static double MEM_CHUNCK[RESERVA_MEMORIA];

 
#include "nm_lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <math.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>

/****** Benchmark para matrices cuadradas (NXN) ******/

int main(int argc, char **argv){
	int N, SIZE;
	double *matrizA, *matrizB, *matrizC;
	N = (int)atoi(argv[1]);
	SIZE = N*N;
	//Se apuntan los punteros a la dirrección de memoria reservada. según el tamaño de la matriz NxN
	matrizA = MEM_CHUNCK;
	matrizB = matrizA + SIZE;
	matrizC = matrizB + SIZE;
	
	// Se inicializan las matrices
	inicializar_matrices_double_rnd(N, matrizA, matrizB, matrizC);
	imprimir_matrices_double(N, matrizA);
	imprimir_matrices_double(N, matrizB);
	
	// Se multiplican las Matrices: Algoritmo Clasico FilasXColumnas
	tiempo_inicial();
	producto_matrices_double(N, matrizA, matrizB, matrizC);
	tiempo_final();
	
	return 0;
} 
