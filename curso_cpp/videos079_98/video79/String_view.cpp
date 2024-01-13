#include <iostream>
#include <string>
#include <string_view>

std::string_view preguntarNombre(){

    std::cout << "Escribe tu nombre: ";
    std::string nombre{};
    std::cin >> nombre;

    std::string_view vista{nombre};

    std::cout << "Hola " << vista << "\n";

    return vista; // aquí nombre muere y deja de estar al alcance
}

int main(){

    std::string_view vista{preguntarNombre()}; // Esta vista sigue viva, pero no tiene nada que reflejar porque nombre a fallecido.

    std::string_view vistaDos{"Hola"}; // si que funciona pues, entonces si nunca va a ser cambiado hay que usar std::string_view como constantes

    std::cout << "Hola " << vista << " Funciona esto? saludame: " << vistaDos << "\n"; // devuelve basura.

    //de std::string_view a std::string usando static_Cast               static_cast<std::string>(vista)
    return 0; 
}