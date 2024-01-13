#include <iostream>
#include <algorithm>
#include <array>
#include <string_view>

int main(int argc, char* argv[]){

    constexpr std::array<std::string_view, 4> arr{ "amarillo", "naranja", "verde", "rojo"};

                                                               // Esta es la expresión lambda usada directamente en un argumento de otra función
    const auto encontrado{std::find_if(arr.begin(), arr.end(), [](std::string_view str){ return (str.find("ver") != std::string::npos); })};

    if(encontrado == arr.end()) std::cout << "No se encontró ver\n";
    else std::cout << "Encontrado en: " << *encontrado << "\n";

    auto esPar{[](int i){ return i % 2 == 0; } }; // expresión lambda almacenada en una variable.

    return 0; 
}