#include <iostream>

using namespace std; //se usará el namespace std:: en todos sin necesidad de ponerlo explícitamente

int sumar(int x, int y){

    return x + y;
}

int sumar(int x, double y){

    return x + y;
}

int main(){

   int x {4};
   int y {3};

   std::cout << sumar(x,y);
}