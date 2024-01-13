#include <iostream>

#if 0
int main(){

    int x { 9 };
    int y { 23 };
    const int* ptr{ &x };
    *ptr = 7;  // no permitido, el valor de la dirección del puntero no puede ser modificado al ser const
    x = 7; // permitido
    ptr = &y;  // permitido
}
#endif

int main(){

    int x { 9 };
    int y { 23 };
    int* const ptr{ &x };
    *ptr = 7;  // permitido, el constante es el puntero no el valor de la dirección a la que apunta
    //ptr = &y;  // no permitido

}