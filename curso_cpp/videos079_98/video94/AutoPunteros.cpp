#include <string>

std::string * obtenerPtr(){} //Cualquier función que devuelva un puntero

int main(){

    const auto ptr1{obtenerPtr()}; //std::string* const (puntero constante)
    auto const ptr2{obtenerPtr()}; //std::string* const

    const auto* ptr3{obtenerPtr()}; // const std::string*
    auto* const ptr4{obtenerPtr()}; //std::string* const

    return 0;
}

#if 0

std::string* obtenerPuntero(){
    //hacer algo
}

int main(){

    auto ptr1{obtenerPuntero()};  //Deduce std::string*
    auto* ptr2{obtenerPuntero()}; //Deduce std::string*

    return 0;
}

#endif
