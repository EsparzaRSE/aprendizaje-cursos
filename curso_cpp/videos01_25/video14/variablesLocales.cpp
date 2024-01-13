#include <iostream>

int sumar(int x, int y){ //comienza la vida útil y el alcance de las variables 
     
    return x + y;
} //Aquí mueren

int main(){

   int x {3}; //El alcance empieza de aquí hacia abajo
   int y {7}; //Lo mismo

   std::cout << "el valor de la suma es: " << sumar(x,y) << "\n";
   return 0;
} //Y en este punto son destruidas porque termina el alcance y así su vida útil