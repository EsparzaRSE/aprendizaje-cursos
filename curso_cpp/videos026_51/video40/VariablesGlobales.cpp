#include <iostream>

int g_x{};

int main(){

    int y{};
    int z;

    std::cout << "La variable global sin inicializar contiene el valor: " << g_x << "\n";
    std::cout << "La variable local sin inicializar contiene el valor: " << y << "\n";
    std::cout << "La variable local sin inicializar contiene el valor: " << z << "\n";

    //Quería ver si en la local almacenaba cualquier basura, pero también le mete un 0

    return 0;
}