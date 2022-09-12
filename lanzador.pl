#!/usr/bin/perl

=begin

Fecha: 26 - 07 - 2022
Autor: Kevin Chepe
Tema: Automatización de baeria de experimentos
Materia: Parallel and Distributed Compunting
Requerimientos:
	- Vector de Benchmark <ejecutabes>
	- Vector de cargas
	- N: repeticiones
	- La idea es iterar por ejecutables *cargas* reppeticiones
=cut

#Se crea el vector de ejecutables
@Ejecutables = ("nm_main_int");
#Se crea el vector de cargas
@Cargas = ("3000");
#Se crea la variable del numero de repeticiones
$N = 30;

foreach $exes (@Ejecutables){
	foreach $carga (@Cargas){
		#Se crea un fichero
		$file = "Soluciones/"."$exes"."_$carga".".txt";
		for ($i=0; $i<$N; $i ++){
			system("./$exes $carga >> $file");
			#print("./$exes $carga\n");
		}
	close($file);
	}
}
