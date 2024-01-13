#include <iostream>
#include "header.h" //se pone doble comillas para darle una pista al compilador de donde buscar los header. Si van con comillas le decimos que lo hemos
                    //escrito nosotros mismos, y si van con <> que no lo hemos escrito nosotros.

int main(){

   int x {5};
   int y {8};
   std::cout << "El resultado de la suma es: " << sumar(x,y) << "\n";
}