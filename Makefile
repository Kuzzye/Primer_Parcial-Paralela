#/***********************************************************
# * Fecha: 10-Agosto-2022
# * Autor: Kevin Fabian Chepe
# * Materia: Parallel and Distributed Computing
# * Tema: Introducción Leguaje de Programación C
# * Tópico: Diseño de Benchmark
# * Fase 01: Multiplicación de Matrices Clásica
# ***********************************************************/

GCC = gcc
GFLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
PROGRAMS = nm_main_int nm_main_int_rnd nm_main_double nm_main_double_rnd

all: $(PROGRAMS)

nm_main_int:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) nm_lib.c -c
	$(GCC) $(GFLAGS) -o $@ nm_lib.o $@.o $(FMATH)

nm_main_int_rnd:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) nm_lib.c -c
	$(GCC) $(GFLAGS) -o $@ nm_lib.o $@.o $(FMATH)    

nm_main_double:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) nm_lib.c -c
	$(GCC) $(GFLAGS) -o $@ nm_lib.o $@.o $(FMATH)

nm_main_double_rnd:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) nm_lib.c -c
	$(GCC) $(GFLAGS) -o $@ nm_lib.o $@.o $(FMATH)
	
clean:
	$(RM) *.o $(PROGRAMS)
