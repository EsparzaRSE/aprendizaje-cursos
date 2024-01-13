#include <iostream>
#include <string>

int main(){

    //std::string reverse{};
    std::string nombreApellido {};
    int edad {};

    std::cout << "Introduce tu nombre y apellido: ";
    std::getline(std::cin >> std::ws, nombreApellido);

    std::cout << "Ahora introduce tu edad: ";
    std::cin >> edad;

    std::cout << "Tu nombre y apellidos son: " << nombreApellido << " y tu edad es: " << edad << "\n";
    std::cout << nombreApellido.length() << "\n";

    /*for(int i{static_cast<int>(nombreApellido.size()) - 1}; i >= 0; --i){
        reverse += nombreApellido.substr(i,1);
    }
    std::cout << reverse << "\n";*/

    return 0;
}