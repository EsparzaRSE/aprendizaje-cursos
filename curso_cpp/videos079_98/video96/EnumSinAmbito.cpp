enum Color{
    amarillo, rojo, azul,
};

enum Color2{
    rojo, verde,
};

int main(){

    Color c1{amarillo};
    //Color c2{rojo};  //da error porque rojo está en dos enum y colisiona nombres.

    return 0;
}