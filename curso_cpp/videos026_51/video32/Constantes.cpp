#include <iostream>

int main(){

    constexpr int conocesValor { 9 }; // Si ya conocemos su valor o para constantes simbólicas o números mágicos
    int x {};
    const int valorVendraEnEjecucion { x }; // Para las constantes que se necesiten datos que aun no conocemos p.ej. necesitando un std::cin

}