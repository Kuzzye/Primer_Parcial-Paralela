/***********************************************************
 * Fecha: 10-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: Parallel and Distributed Computing
 * Tema: Introducción Leguaje de Programación C
 * Tópico: Diseño de Benchmark
 * Fase 01: Multiplicación de Matrices Clásica
 ***********************************************************/
#include "nm_lib.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <math.h>
#include <time.h>
#include <errno.h>
#include <unistd.h>

struct timespec punto_inicio, punto_final;


/***** Se presentan las funciones *****/

// Funcion captura del tiempo
void tiempo_inicial(){
	clock_gettime(CLOCK_MONOTONIC, &punto_inicio);
}

void tiempo_final(){
	double suma_tiempo;
	clock_gettime(CLOCK_MONOTONIC, &punto_final);
	
	// Sumar segundos y pasarlos a nanosegundos
	suma_tiempo = (punto_final.tv_sec - punto_inicio.tv_sec)*1e9;
	
	// Sumar los nanosegundos
	suma_tiempo = (suma_tiempo + punto_final.tv_nsec - punto_inicio.tv_nsec)*1e-9;
	printf("%f \n", suma_tiempo);
}

/*************************************** BENCHMARK 04 DOUBLE Y Aleatorios ***************************************/
//Funcion generadora de numeros aleatorios
//Numeros 0 y 9 como pruena

double funcionRandom_double(){
	double min = 0, max = 9;
	static double flag = -1;

	if((flag = (flag < 0))){
		//Se genera la semilla <al usar la funcion>
		srand(time(NULL) + getpid());
	}
	if(min > max)
		return errno = EDOM, NAN;
	return min + (double)rand()/((double)RAND_MAX/(max-min));
}

// Funcion de inicializar matrices
void inicializar_matrices_double_rnd(int n, double *a, double *b, double *c){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){	
			a[i+j*n] = funcionRandom_double();
			b[i+j*n] = funcionRandom_double();
			c[i+j*n] = 0;
		}
	}
}


/*************************************** BENCHMARK 03 DOUBLE ***************************************/

// Funcion de inicializar matrices
void inicializar_matrices_double(int n, double *a, double *b, double *c){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){	
			a[i+j*n] = 3*(i+j);
			b[i+j*n] = 2*j + 3*i;
			c[i+j*n] = 0;
		}
	}
}

// Funcion de imprimir matrices
void imprimir_matrices_double(int n, double a[]){
	int i, j;
	if(n<5){
		for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%.2f ", a[i+j*n]);
		}
		printf("\n");
	}
	printf("\n");
	}
}

// Funcion de multiplicar matrices
void producto_matrices_double(int n, double *a, double *b, double *c){
	int i, j, k;
	int suma_parcial;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			suma_parcial = 0;
			double *pA, *pB;
			pA = (a + i*n);
			pB = (b + j);
			for(k = 0; k < n; k++, pA++, pB+=n){
				suma_parcial += (*pA * *pB);
			}
			c[j+i*n] = suma_parcial;
		}
	}
}


/********************** BENCHMARK 02 INT y Aleatorios*****************************/
//Función generadora de numeros aleatorios
//numeros 0 y 9 <como prueba>

int funcionRandom(){
	int min = 0, max = 9;
	static int flag = -1;
	if((flag = (flag<0))){
		//Se genera la semilla <al usar la función>
		srand(time(NULL) + getpid());
	}
	if (min > max)
		return errno = EDOM, NAN;
	return min + (int)rand()/((int)RAND_MAX/(max-min));
}

void inicializar_matrices_int_rnd(int n,int *a,int *b,int *c){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){	
			a[i+j*n] = funcionRandom();
			b[i+j*n] = funcionRandom();
			c[i+j*n] = 0;
		}
	}
}

/********************** BENCHMARK 01 INT*****************************/
// Funcion de inicializar matrices
void inicializar_matrices_int(int n,int *a,int *b,int *c){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){	
			a[i+j*n] = 3*(i+j);
			b[i+j*n] = 2*j + 3*i;
			c[i+j*n] = 0;
		}
	}
}

// Funcion de imprimir matrices
void imprimir_matrices_int(int n, int a[]){
	int i, j;
	if(n<5){
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				printf("%d ", a[i+j*n]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

// Funcion de multiplicar matrices
void producto_matrices_int(int n,int *a,int *b,int *c){
	int i, j, k;
	int suma_parcial;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
		/** Auxiliares **/
			suma_parcial = 0;
			int *pA, *pB;
			pA = (a + i*n);
			pB = (b + j);
			for(k=0; k<n; k++, pA++, pB+=n){
				suma_parcial += (*pA * *pB);
			}
			c[j+i*n] = suma_parcial;
		}
	}
}
