#include <string>

const std::string& obtenerRef(); // Cualquier función que devuelva una ref constante

int main(){

    auto ref1{obtenerRef()}; //Deduce std::string (quita la referencia, y le queda una const de alto nivel y la quita)
    const auto ref2{obtenerRef()}; // const std::string (quita referencia, const replicada)

    auto& ref3{obtenerRef()}; // const std::string& (Mantiene referencia, mantiene const (al ser de bajo nivel no la elimina))
    const auto& ref4{obtenerRef()}; // Igual que ref3, se considera buena práctica colocar el const aunque no sea necesario

    return 0;
}

#if 0

std::string& obtenerRef(){
    //hacer algo
}

int main(){

    auto ref{obtenerRef()}; // Deduce std::string, no std::string&

    return 0;
}

#endif