#include <iostream>

int main(){

    //los dos tendrán el mismo valor

    int x { 8 };
    int y = ++x; //Se incrementa en 1 el valor de x (1+8 = 9) y se almacena en y  INCREMENTA Y COPIA

    //incrementa a pero b tendrá el valor anterior de a

    int a { 3 };
    int b = a++; //En b se copia 3, y luego aumenta en 1 a que pasará a valer 4.  COPIA E INCREMENTA

}