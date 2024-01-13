#include <iostream>

int obtenerValorDeUsuario(){

    std::cout << "Introduce un valor: ";
    int valor {};
    std::cin >> valor;
    return valor;
}

int main(){

    int valorUsuario {obtenerValorDeUsuario()};
    std::cout << "El valor introducido por el usuario es: " << valorUsuario << " y doblado sería: " << valorUsuario * 2 << "\n\n";
    return 0; 
}