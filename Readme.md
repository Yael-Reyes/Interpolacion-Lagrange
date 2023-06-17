# Interpolación de Lagrange

Este proyecto implementa un interpolador de Lagrange, que permite realizar interpolaciones polinómicas utilizando el método de interpolación de Lagrange. El interpolador puede ser utilizado para estimar valores desconocidos dentro de un conjunto de datos conocidos.

## Características
- Permite ingresar datos en forma de subtablas de valores X e Y.
- Realiza interpolaciones polinómicas utilizando el método de Lagrange.
- Proporciona un menú interactivo para facilitar la interacción con el interpolador.
- Permite realizar múltiples interpolaciones en una sola ejecución.
  
## Compilar
Para compilar seguir el siguiente comando:
- g++ -o bin/Ejecutar src/Main.cpp -I include -std=c++11
  
## Uso
1. Ejecuta el programa.
2. Selecciona la opción "Hacer una interpolación" en el menú.
3. Ingresa el número de datos que tendrá la subtabla de datos.
4. Ingresa los valores X e Y de la subtabla de datos.
5. Ingresa el valor de X para el cual deseas estimar el valor de Y.
6. El interpolador calculará el valor estimado de Y utilizando el método de Lagrange.
7. El resultado se mostrará en pantalla y te preguntara si quieres hacer otra interpolacion con otro valor de X.

## Requisitos
*Compilador C++ compatible con C++11 o superior.*

## Desarrolladores
Este proyecto es ideado y desarrallodado por:

- Enrique Yael Alvarez Reyes
- Francisco Javier Robles Magaña

## Licencia
Este proyecto está bajo la Licencia MIT.


