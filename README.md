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
Resolver la ecuación: $X=3A-4B$<br>

$$
**A=**
\begin{pmatrix}
4 & -2\\
1 & -7
\end{pmatrix}
$$

$$
**B=**\begin{pmatrix}
-1 & 2\\
6 & -5
\end{pmatrix}
$$

## 2.2  Segundo ejercicio
Resolver la ecuación: $2X+4A=3BA$<br>

$$
**A=**\begin{pmatrix}
0 & -1\\
2 & 1
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
1 & 2\\
3 & 4
\end{pmatrix}
$$

## 2.3 Tercer ejercicio
Resolver la ecuación: $AXB^T=C$<br>

$$
**A=**\begin{pmatrix}
-3 & -2\\
3 & 3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
5 & 3\\
9 & 4
\end{pmatrix}<br>
$$

$$
**C=**\begin{pmatrix}
1 & 1\\
0 & 0
\end{pmatrix}
$$

## 2.4 Cuarto ejercicio
Resolver la ecuación: $XA=B$<br>

$$
**A=**\begin{pmatrix}
2 & 1\\
-4 & -3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
2 & 2\\
6 & 4
\end{pmatrix}
$$


## 2.5  Quinto ejercicio
Resolver la ecuación: $X=2(AB+C)$<br>

$$
**A=**\begin{pmatrix}
3 & 0 & -1\\
0 & 2 & 1
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
1 & 2\\
1 & 0\\
0 & 6
\end{pmatrix}<br>
$$

$$
**C=**\begin{pmatrix}
-2 & 0\\
-2 & -5
\end{pmatrix}
$$

## 2.6  Sexto ejercicio 
Resolver la ecuación: $X=A+3B$<br>

$$
**A=**\begin{pmatrix}
1 & 5 & -1\\
-1 & 2 & 2\\
0 & -3 & 3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
-1 & -4 & 3\\
1 & -2 & -2\\
-3 & 3 & -5
\end{pmatrix}
$$

## 2.7 Séptimo ejercicio
Resolver la ecuación: $XA=B$<br>

$$
**A=**\begin{pmatrix}
2 & 7 & 3\\
3 & 9 & 4\\
1 & 5 & 3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
1 & 0 & 2\\
0 & 1 & 0\\
0 & 0 & 1
\end{pmatrix}
$$

## 2.8 Octavo ejercicio
Resolver la ecuación: $AX=B$<br>

$$
**A=**\begin{pmatrix}
1 & 1 & 1\\
6 & 5 & 4\\
13 & 10 & 8
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
0 & 1 & 2\\
1 & 0 & 2\\
1 & 2 & 0
\end{pmatrix}
$$

## 2.9 Noveno ejercicio
Resolver la ecuación: $X=A^TA-2A$<br>

$$
**A=**\begin{pmatrix}
3 & -1\\
0 & 2
\end{pmatrix}
$$

## 2.10 Décimo ejercicio
Resolver la ecuación: $X=A^3$<br>

$$
**A=**\begin{pmatrix}
4 & 2\\
-1 & 0
\end{pmatrix}
$$

## 2.11 Onceavo ejercicio

Resolver la ecuación: $A^TXB=C$<br>

$$
**A=**\begin{pmatrix}
2 & 4\\
3 & 2
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
1 & 0\\
2 & 1
\end{pmatrix}<br>
$$

$$
**C=**\begin{pmatrix}
7 & 5\\
6 & 1
\end{pmatrix}
$$

## 2.12 Doceavo ejercicio
Resolver la ecuación: $X=AA^T-2AB$<br>

$$
**A=**\begin{pmatrix}
1 & 0 & -2\\
2 & -1 & 3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
2 & -3\\
-2 & 0\\
-1 & -2 
\end{pmatrix}
$$

## 2.13 Treceavo ejercicio
Resolver la ecuación: $X=ABC$<br>

$$
**A=**\begin{pmatrix}
4 & 8 & 12
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
3 & 2\\
0 & 1\\
-1 & 0 
\end{pmatrix}<br>
$$

$$
**C=**\begin{pmatrix}
3\\
-1 
\end{pmatrix}
$$

## 2.14 Catorceavo ejercicio
Resolver la ecuación: $A^TX=B$<br>

$$
**A=**\begin{pmatrix}
3 & 4 & 1\\
-1 & -3 & 3\\
2 & 3 & 0
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
3 & 9 & 7\\
1 & 11 & 7\\
7 & 5 & 7
\end{pmatrix}
$$

## 2.15 Quinceavo ejercicio
Resolver la ecuación: $XA=B$<br>

$$
**A=**\begin{pmatrix}
2 & 5 & 7\\
6 & 3 & 4\\
5 & -2 & -3
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
-1 & 1 & 0\\
0 & 1 & 1\\
1 & 0 & -1
\end{pmatrix}
$$

## 2.16 Dieciseisavo ejercicio
Resolver la ecuación: $Ax=B$<br>

$$
**A=**\begin{pmatrix}
1 & 1 & 1 & 1\\
1 & 1 & -1 & -1\\
1 & -1 & 1 & -1\\
1 & -1 & -1 & 1
\end{pmatrix}<br>
$$

$$
**B=**\begin{pmatrix}
1 & 1 & 0 & 0\\
1 & 0 & 1 & 0\\
1 & 0 & 0 & 1\\
1 & 0 & 1 & 1
\end{pmatrix}
$$

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
