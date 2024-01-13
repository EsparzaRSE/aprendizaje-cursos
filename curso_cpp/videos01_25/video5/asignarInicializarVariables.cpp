#include <iostream>

int main(){

    std::cout << "Vamos a asignar variables";

    // se desaconseja esta manera de hacerlo, hay que inicializarla al crearla.

    int a;   //definir la variable 
    a = 10;  //asignar un valor a la variable


    int b;       //sin inicializador
    int x = 45;  // asignación por copia
    int c (3);   // inicializador entre paréntesis o directa
    int d {7};   //inicializador entre llaves o de lista

    // 3 maneras distintas de inicializar entre llaves

    int e {3};  //inicialización de lista directa
    int f = {5};  //inicialización de lista por copia
    int valor {};  //Cuando quereamos inicializar una variable sin valor, este es el modo de hacerlo.

}