#include <iostream>

int obtenerValorDeUsuario(){

    int valor{};
    std::cout << "Escribe un valor: ";
    std::cin >> valor;
    return valor;
}

int doblarNumero(int doblar){

    return doblar*2;
}

int main(){

   int valorDevuelto {obtenerValorDeUsuario()};
   std::cout << "El valor introducido es: " << valorDevuelto << " y doblado es: " << doblarNumero(valorDevuelto) << "\n";
   return 0;
}