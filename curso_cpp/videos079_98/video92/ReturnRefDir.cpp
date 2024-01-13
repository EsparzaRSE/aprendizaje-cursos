#include <iostream>

const std::string& verNombrePrograma(){

    static const std::string nombrePrograma{"Calculadora"};

    return nombrePrograma;
}

int main(){

    std::cout << "Este programa se llama " << verNombrePrograma() << "\n";

    return 0;
}