# Primer_Parcial-Paralela
# Encabezado
<p align="center"><img src="https://res-5.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_256,w_256,f_auto,q_auto:eco/v1455514364/pim02bzqvgz0hibsra41.png"width="200" height="200">
</img><br>
<br>
<i><b>Docente:</b></i> John Corredor, PhD.
<br>
<i><b>Asignatura:</b></i> Parallel and Distributed Computing.
<br>
<i><b>Estudiantes:</b></i> <br>David Santiago Zarate,<br>Kevin Fabian Chepe,<br>Andres Cardenas
<br>
<i><b>Tema:</b></i> Primer Parcial
<br>
12/09/22
<br>
</p>

# Resumen

* En el presente artículo se exhibirán los resultados experimentales que se obtuvieron al ejecutar los diferentes tipos de benchmark planteados (enteros, enteros aleatorios, double y double aleatorios), de multiplicación de matrices de manera básica, así mismo realizar su respectivo análisis, comparando los resultados obtenidos entre los distintos nodos de cómputo, evaluar el rendimiento de los nodos frente a diferentes situaciones y sacar las respectivas conclusiones basándose en las gráficas obtenidas por cada miembro del equipo.


# Introducción

* Debido a que existen aplicaciones que demandan un alto rendimiento , se requiere tener respuestas rápidas en tiempo razonable y también poder procesar grandes volúmenes de información de manera efectiva, para esto se necesita poder Medir las capacidades de los diferentes dispositivos. Teniendo en cuenta lo anterior, se utilizaron las siguientes librerías para la creación de programas (benchmarks) con la capacidad de multiplicar matrices y medir el tiempo de su ejecución:

Teniendo en cuenta que un benchmark es una técnica utilizada para medir el rendimiento de un sistema o uno de sus componentes. Los cuatro benchmarks que se utilizaron para medir el rendimiento de las computadoras fueron los siguientes:

* Multiplicación de matrices (nxn) de enteros.
* Multiplicación de matrices (nxn) de enteros aleatorios.
* Multiplicación de matrices (nxn) de double.
* Multiplicación de matrices (nxn) de double aleatorios.


Los anteriores benchmarks se ejecutaron en los computadores de cada miembro del equipo de trabajo y se obtuvieron los tiempos de ejecución medidos en segundos para cada uno de los benchmarks en los diferentes nodos de trabajo. Para ver las diferencias que hay entre los cuatro benchmarks desarrollados se realizarán diferentes gráficas para poder tener una mejor visión de los resultados de una manera gráfica.

# Desarrollo

Para la toma de rendimiento se utilizaron 4 nodos con las siguientes especificaciones:

* Nodo David: AMD Ryzen 7 3700U @2.30GHz
* Nodo2 David: Intel(R) Core(TM) i5-2450M CPU @ 2.50GHz
* Nodo Kevin: Intel(R) Core(TM) i5-8300H CPU @ 2.30GHz
* Nodo Andres: Intel® Core™ i5-5200U CPU @ 2.20GHz × 4

Los algoritmos al ser programas modularizados tienen en común las siguientes características, cuentan con el fichero mm_lib.c (inicialización, multiplicación, e impresión de matrices), una interfaz llamada mm_lib.h que recibe y define las funciones de la matriz y finalmente los ficheros principales mm_main_int.c, mm_main_int_rnd.c, mm_main_double.c y mm_main_double_rnd.c los cuales ejecutan las funciones mencionadas anteriormente. Un fichero para la medición del tiempo y su debida interfaz, finalmente un script Makefile que facilita la compilación de forma automatizada de cada algoritmo al componerse de varios ficheros de código fuente.

Metodología algoritmo: Se realizó un programa modularizado que calcule la multiplicación de matrices con enteros, enteros aleatorios, double y double aleatorio en donde se recibe un tamaño para las matrices. Para la experimentación se utilizaron 12 cargas con los siguientes tamaños (280, 400, 750, 900, 1200, 1500, 1900, 2100, 2330, 2500, 2750, 3000).

Se utilizó un script de automatización programado en Perl y se obtuvieron 30 datos para cada multiplicación de matriz(nxn). Después de obtener las medidas de rendimiento de cada algoritmo, los resultados se organizaron en diferentes archivos separados por comas (csv), en los cuales se calculó el promedio para cada tamaño de matriz. Por medio de unas gráficas de líneas se representan las variaciones de tiempo que presentaron cada repetición para cada tamaño de matriz.

# Conclusiones

* Con las gráficas obtenidas se puede analizar que cada benchmark es distinto y, por lo tanto, su rendimiento también, los resultados varían dependiendo de las cargas y la capacidad de cómputo de cada nodo, el nodo con procesador con el rendimiento más bajo, muestra en sus cargas un rendimiento bastante bajo para un procesador que en términos de Ghz es más veloz, pero demuestra todo lo contrario, esta observación se da, ya que el procesador es algo antiguo y, sin embargo, los demás procesadores que tienen menos velocidad de Ghz, pero son más modernos presentan mejor rendimiento.
* En algunos casos se puede observar que la última carga tiene un valor promedio del tiempo más bajo. Esto se presenta específicamente en las gráficas 3 y 4 las cuales son con double.
* Se destaca la utilidad de los benchmark a la hora de medir rendimiento. Si bien se puede definir un benchmark como una aplicación de juguete que no tiene una utilidad per se, no significa que no ayude. El tener ese tipo de aplicaciones permite preparar terreno para unas más potentes y especializadas. En el caso de una empresa, el medir el rendimiento con ese tipo de aplicaciones permite reducir costos de mal funcionamiento o de errores reales en práctica, lo que permite que se pueda garantiza eficiencia y calidad en los productos o servicios que ofrezca.
* Con respecto a la modularización de los algoritmos, cabe resaltar las ventajas de esa arquitectura de construcción de software. Debido a que el manejo por partes permite tomar y reemplazar sólo una pieza del total, aquello combinado con un lanzador múltiple permite que se hagan varias pruebas evaluando cuál se adapta mejor a los requerimientos. Al comparar esa manera de creación de código con una arquitectura monolítica, demuestra que a la hora de optimizar un sistema no es sólo cambiar piezas de hardware a unas más potentes, sino que la forma y calidad de construcción del software es igualmente importante y se demuestran con los resultados y la discusión de los mismos.


# Referencias
* RENDIMIENTO, DESEMPEÑO Y MÉTRICAS PC. (2012, 5 julio). Webs. http://enredados2012.blogspot.com/2012/09/rendimiento-desempeno-y-metricas-pc.html
* Qué es un benchmark. (s. f.). Tableau. Recuperado 12 de septiembre de 2022, de https://www.tableau.com/es-es/learn/articles/what-is-a-benchmark
* C Library -. (s. f.). Recuperado 12 de septiembre de 2022, de https://www.tutorialspoint.com/c_standard_library/time_h.htm

