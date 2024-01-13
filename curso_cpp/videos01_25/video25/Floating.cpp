#include <iostream>
#include <iomanip>  // permite usar el setprecision

int main(){

    float x { 5.0438943843f }; // en este se le va la pinza redondeando a partir del sexto dígito
    double y { 9.09149110994943 }; // este lo hace bien ya que tiene precisión entre 15 y 18
    std::cout << std::setprecision(16) << x << "\n";
    std::cout << std::setprecision(16) << y << "\n";
    return 0;
}

