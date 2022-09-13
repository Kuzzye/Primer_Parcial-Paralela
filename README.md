# Primer_Parcial-Paralela
# Encabezado
<p align="center"><img src="https://res-5.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_256,w_256,f_auto,q_auto:eco/v1455514364/pim02bzqvgz0hibsra41.png"width="200" height="200">
</img><br>
<i><b>Docente:</b></i> John Corredor, PhD.
<br>
<i><b>Asignatura:</b></i> Introducción HPC
<br>
<i><b>Estudiante:</b></i> Edna Sofía Orjuela Puentes
<br>
<i><b>Tema:</b></i> Primer taller de Eigen
<br>
<i><b>Fecha:</b></i>20/08/22
<br>
</p>

# Introducción

La biblioteca Eigen de C++ es usada para el desarrollo de operaciones de álgebra lineal , tales como, operación de matrices, vectores, solucionadores numéricos, entre otros.<br>
Las plantillas que maneja Eigen, permiten usar:<br>
* Diferentes tamaños de matrices<br>
* Todos los tipos numéricos<br>
* Matrices de tamaño fijo optimizadas<br>
* Compatibilidad con descomposiciones de matrices y caracterìsticas geométricas<br><br>
Siendo éstas, algunas de las caracterìsticas que hacen de Eigen, una herramienta además de libre, importante y completa para realizar ejercicios de álgebra lineal.   

# Resumen

El presente taller tiene como objetivo el desarrollo de 16 ejercicios en lenguaje de
c++, los cuales se desarrollaron en la plataforma QT, para hacer uso de la biblioteca Eigen.

A continuación, se encontrará una serie ejercicios sobre ecuaciones de matrices, dichos ejercicios, están contenidos en funciones que posteriormente serán llamados en un menú, donde el usuario podrá elegir el programa que desea visualizar.

# Desarrollo

## 2.1  Primer ejercicio

# Guía para la ejecución del proyecto
Para ejecutar este programa, es necesario:<br>
**1. Instalar [Eigen](https://web.stanford.edu/dept/cs_edu/resources/qt/install-linux)** 
```
# sudo apt install libeigen3-dev
sudo apt update
```
<br>**2. Crear enlace simbólico de la biblioteca Eigen** 
```
# ln -sf  /usr/include/eigen3/Eigen Eigen
ln -sf  /usr/include/eigen3/unsupported unsupported
sudo apt update
```
<br>**3. Instalación de BOOST** 
```
#sudo apt-get install libboost-all-dev
sudo apt update
```
<br>**4. Crear enlace simbólico de la biblioteca BOOST** 
```
#ln -sf /usr/include/boost boost
sudo apt update
```
<br>**5. Instalación de CMAKE** 
```
#sudo apt install cmake
sudo apt update
```
<br>**6. Configurar QT**
* Ir a la sección de "Help", seleccionar "About Plugins" y desactivar la opción "ClangCodeModel"
* Ir a la sección de "Projects", seleccionar "Run", y activar la opción "Run in terminal"<br>

<br>**7. Ejecutar el programa**
* Abrir proyecto en "Open Project"
* Seleccionar el archivo "main.cpp"
* Presionar control+R
<br>
Luego de seguir los pasos anteriores, se abrirá la terminal con el menú de opciones, luego podrá digitar el número del código que desea vistualizar<br><br>
Para mayor entendimiento del proceso a realizar, revisar la figura 1.<br><br>
<p align="center"> <img src="https://github.com/edso2103/TallerEigen/blob/main/Figura1.png" width="800"/> </p>

<p align="center"><i><b>Figura 1</i></b></p>

# Conclusiones

* El desarrollo de este ejercicio, permite el conocimiento de la herramienta Eigen y todas sus funciones para la resolución de problemas de matrices.
* Durante el desarrollo del taller, se comprende conceptos como, operaciones de reducción, operaciones elementwise, declaración, inicialización y aritmética de matrices y vectores.
* Además se logran repasar temas de álgebra lineal como, la inversa y la transpuesta de una matriz.

# Referencias
* Eigen. (2022, 13 junio). Eigen. Recuperado 20 de agosto de 2022, de https://eigen.tuxfamily.org/index.php?title=Main_Page
* Math Exercises & Math Problems: Matrix Equations. (s. f.). Math Exercises. Recuperado 20 de agosto de 2022, de https://www.math-exercises.com/matrices/matrix-equations
