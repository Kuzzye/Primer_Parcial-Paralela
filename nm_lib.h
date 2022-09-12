/***********************************************************
 * Fecha: 10-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: Parallel and Distributed Computing
 * Tema: Introducción Leguaje de Programación C
 * Tópico: Diseño de Benchmark
 * Fase 01: Multiplicación de Matrices Clásica
 ***********************************************************/

#ifndef NM_LIB_H_INCLUDED
#define NM_LIB_H_INCLUDED

/*Se presenta el prototipo de las funciones*/

void tiempo_inicial();
void tiempo_final();

/********************** BENCHMARK04: MM CLasico con double y aleatorios ************************/
void inicializar_matrices_double_rnd(int n, double *a, double *b, double *c);

/********************** BENCHMARK03: MM CLasico con double *************************************/
void inicializar_matrices_double(int n, double *a, double *b, double *c);
void imprimir_matrices_double(int n, double *matriz);
void producto_matrices_double(int n, double *a, double *b, double *c);

/********************** BENCHMARK 02: Clásico con enteros y aleatorios*****************************/
void inicializar_matrices_int_rnd(int n, int *a, int *b, int *c);

/********************** BENCHMARK 01: Clásico con enteros *****************************/

void inicializar_matrices_int(int n, int *a, int *b, int *c);
void imprimir_matrices_int(int n, int a[]);
void producto_matrices_int(int n, int *a, int *b, int *c);

#endif
