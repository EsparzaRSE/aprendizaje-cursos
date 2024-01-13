#include <iostream>

int sumar(int x, int y); //Declaración anticipada usando una función prototipo (sin llaves ni cuerpo)
// Si le pones nombres distintos a los parámetros funciona pero es complicarte la vida tu solo.
// int sumar(int, int); Esta función prototipo sin nombres de los parámetros funciona pero no es una buena práctica

int main(){

    int x {7};
    int y {6};
    std::cout << "Resultado de la suma: " << sumar(x,y) << "\n";
    return 0;
}

int sumar(int x, int y){

    return x+y;
}