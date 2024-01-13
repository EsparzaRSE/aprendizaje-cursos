#include <iostream>

extern int g_x;   // Aunque por defecto sean externas, debes utilizar declaración anticipada también para usarlas
extern int g_y;   // sin el const o constexpr ni llaves

int main(){

    std::cout << g_y << "\n";
    std::cout << g_x << "\n";

    return 0;
}